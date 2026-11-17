#!/usr/bin/env python3
"""Download every 28tech (DMOJ) submission of a user, including source code.

28tech has no public API, and submission source is only visible to the
submission's author, so this drives the ordinary web UI with an
authenticated session.

Authentication is resolved from the first source that yields a value:

    1. --sessionid VALUE
    2. the DMOJ_SESSIONID environment variable
    3. a file named sessionid.txt next to this script
    4. an interactive username/password prompt

The session id is the value of the ``sessionid`` cookie that 28tech sets
once you log in; see README.md for how to copy it out of your browser.
Nothing is ever written to disk except the scraped submissions.

Output (under --out-dir, default ``data``)::

    data/submissions.json        metadata for every submission
    data/source/<id>.<ext>       the source code of each submission

Re-running resumes: submissions whose source file already exists are
skipped unless --refresh is given.
"""

from __future__ import annotations

import argparse
import getpass
import html as html_mod
import http.cookiejar
import json
import os
import re
import sys
import time
import urllib.error
import urllib.parse
import urllib.request
from datetime import datetime, timezone
from pathlib import Path

BASE = "https://oj.28tech.com.vn"
UA = "Mozilla/5.0 (Windows NT 10.0; Win64; x64) heatmap-mirror/1.0"

# Windows consoles often default to a legacy codepage that cannot encode
# Vietnamese problem names; never let that kill a long download.
for _stream in (sys.stdout, sys.stderr):
    if hasattr(_stream, "reconfigure"):
        try:
            _stream.reconfigure(encoding="utf-8", errors="replace")
        except (ValueError, OSError):
            pass

# --- list-page parsing -------------------------------------------------------

ROW_SPLIT = re.compile(r'<div class="submission-row" id="(\d+)"')
STATUS_RE = re.compile(r'class="status"[^>]*>([^<]+)<')
LANG_RE = re.compile(r'class="language"[^>]*>([^<]+)<')
SCORE_RE = re.compile(r'class="score"[^>]*>([^<]*)<')
PROBLEM_RE = re.compile(r'<a href="/problem/([^"]+)"[^>]*>([^<]+)</a>')
ISO_RE = re.compile(r'data-iso="([^"]+)"')

# --- source-page parsing -----------------------------------------------------

SOURCE_TD_RE = re.compile(r'<td class="source-code">(.*?)</td>', re.S)
CSRF_RE = re.compile(r"name='csrfmiddlewaretoken'\s+value='([^']+)'")

# Languages offered by DMOJ, mapped to a file extension. Longest-prefix
# matching is used, so order matters: C++ before C, PyPy before Py.
EXTENSIONS: list[tuple[str, str]] = [
    ("c++", ".cpp"),
    ("cpp", ".cpp"),
    ("c#", ".cs"),
    ("c11", ".c"),
    ("c99", ".c"),
    ("c17", ".c"),
    ("c89", ".c"),
    ("gnu c", ".c"),
    ("clang", ".c"),
    ("c", ".c"),
    ("pypy", ".py"),
    ("python", ".py"),
    ("java", ".java"),
    ("pascal", ".pas"),
    ("golang", ".go"),
    ("go", ".go"),
    ("rust", ".rs"),
    ("ruby", ".rb"),
    ("php", ".php"),
    ("perl", ".pl"),
    ("javascript", ".js"),
    ("node", ".js"),
    ("typescript", ".ts"),
    ("kotlin", ".kt"),
    ("swift", ".swift"),
    ("haskell", ".hs"),
    ("scala", ".scala"),
    ("lua", ".lua"),
    ("r", ".r"),
    ("text", ".txt"),
]


class NotAuthenticated(RuntimeError):
    """Raised when a request lands on the login page."""


def extension_for(language: str) -> str:
    lang = (language or "").strip().lower()
    for prefix, ext in EXTENSIONS:
        if lang.startswith(prefix):
            return ext
    return ".txt"


def html_fragment_to_text(fragment: str) -> str:
    """Strip highlighting markup and unescape entities back to source text."""
    text = re.sub(r"<[^>]+>", "", fragment)
    return html_mod.unescape(text).rstrip("\n") + "\n"


class Client:
    """Minimal cookie-aware HTTP client for the judge."""

    def __init__(self, base: str = BASE, delay: float = 0.4, verbose: bool = False):
        self.base = base.rstrip("/")
        self.delay = delay
        self.verbose = verbose
        self.jar = http.cookiejar.CookieJar()
        self.opener = urllib.request.build_opener(
            urllib.request.HTTPCookieProcessor(self.jar)
        )
        self.opener.addheaders = [("User-Agent", UA)]

    def _open(self, path: str, data: bytes | None = None, referer: str | None = None):
        url = path if path.startswith("http") else self.base + path
        request = urllib.request.Request(url, data=data)
        if referer:
            request.add_header("Referer", referer)
        if self.delay:
            time.sleep(self.delay)
        return self.opener.open(request, timeout=90)

    def get_text(self, path: str) -> tuple[str, str]:
        with self._open(path) as resp:
            return resp.geturl(), resp.read().decode("utf-8", "replace")

    def post_text(self, path: str, fields: dict[str, str], referer: str | None = None):
        data = urllib.parse.urlencode(fields).encode()
        with self._open(path, data=data, referer=referer) as resp:
            return resp.geturl(), resp.read().decode("utf-8", "replace")

    def csrf_token(self) -> str | None:
        for cookie in self.jar:
            if cookie.name == "csrftoken":
                return cookie.value
        return None

    def set_sessionid(self, value: str) -> None:
        self.jar.set_cookie(
            http.cookiejar.Cookie(
                version=0,
                name="sessionid",
                value=value.strip(),
                port=None,
                port_specified=False,
                domain="oj.28tech.com.vn",
                domain_specified=True,
                domain_initial_dot=False,
                path="/",
                path_specified=True,
                secure=True,
                expires=None,
                discard=False,
                comment=None,
                comment_url=None,
                rest={},
                rfc2109=False,
            )
        )

    # -- authentication -------------------------------------------------------

    def is_logged_in(self) -> bool:
        """True when the session is authenticated.

        The submissions list is world-readable, so it is useless as a login
        probe -- requesting it anonymously just yields a filtered page. The
        navigation bar only carries a logout link once a session is active.
        """
        _, body = self.get_text("/")
        return "/accounts/logout/" in body

    def login_with_password(self, username: str, password: str) -> None:
        _, page = self.get_text("/accounts/login/")
        match = CSRF_RE.search(page) or re.search(
            r'name="csrfmiddlewaretoken"\s+value="([^"]+)"', page
        )
        token = match.group(1) if match else (self.csrf_token() or "")

        final, body = self.post_text(
            "/accounts/login/",
            {
                "csrfmiddlewaretoken": token,
                "username": username,
                "password": password,
                "next": "",
            },
            referer=self.base + "/accounts/login/",
        )

        if "/accounts/login/" in final:
            detail = "username or password rejected"
            if re.search(r"(incorrect|sai|không đúng|invalid)", body, re.I):
                detail = "the judge rejected the username/password"
            raise SystemExit(
                f"Login failed: {detail}.\n"
                "If your account uses Google/Facebook sign-in, password login "
                "cannot work -- use the sessionid route instead (see README.md)."
            )

    # -- submissions ----------------------------------------------------------

    def list_page(self, username: str, page: int) -> str:
        quoted = urllib.parse.quote(username)
        candidates = (
            [f"/submissions/user/{quoted}/"]
            if page == 1
            else [f"/submissions/user/{quoted}/{page}", f"/submissions/user/{quoted}/?page={page}"]
        )
        last_error: Exception | None = None
        for path in candidates:
            try:
                final, body = self.get_text(path)
            except urllib.error.HTTPError as exc:
                last_error = exc
                if exc.code == 404:
                    continue
                raise
            if "/accounts/login/" in final:
                raise NotAuthenticated(
                    "Redirected to the login page while listing submissions. "
                    "Your session has expired or lacks access."
                )
            return body
        if last_error:
            raise last_error
        return ""

    def fetch_source(self, submission_id: int) -> tuple[str, str]:
        """Return (source_text, how) for one submission."""
        try:
            final, body = self.get_text(f"/src/{submission_id}/raw")
            if "/accounts/login/" in final:
                raise NotAuthenticated(
                    f"Redirected to login while fetching source of {submission_id}."
                )
            return body, "raw"
        except urllib.error.HTTPError as exc:
            if exc.code not in (403, 404):
                raise

        # Older/patched judges may not expose the raw endpoint; the
        # highlighted page carries the same bytes behind markup.
        final, page = self.get_text(f"/src/{submission_id}")
        if "/accounts/login/" in final:
            raise NotAuthenticated(
                f"Redirected to login while fetching source of {submission_id}."
            )
        match = SOURCE_TD_RE.search(page)
        if not match:
            raise RuntimeError(f"no source block found for submission {submission_id}")
        return html_fragment_to_text(match.group(1)), "highlighted"


def parse_row_chunk(submission_id: int, chunk: str) -> dict:
    status = STATUS_RE.search(chunk)
    language = LANG_RE.search(chunk)
    score = SCORE_RE.search(chunk)
    problem = PROBLEM_RE.search(chunk)
    iso = ISO_RE.search(chunk)

    timestamp = None
    if iso:
        try:
            timestamp = datetime.fromisoformat(iso.group(1))
            if timestamp.tzinfo is None:
                timestamp = timestamp.replace(tzinfo=timezone.utc)
        except ValueError:
            timestamp = None

    return {
        "id": submission_id,
        "status": (status.group(1).strip() if status else "?"),
        "language": (language.group(1).strip() if language else "?"),
        "score": (score.group(1).strip() if score else ""),
        "problem": (problem.group(1) if problem else ""),
        "problem_name": (html_mod.unescape(problem.group(2)).strip() if problem else ""),
        "timestamp_utc": timestamp.isoformat() if timestamp else None,
    }


def parse_list_page(page_html: str) -> list[dict]:
    parts = ROW_SPLIT.split(page_html)
    rows: list[dict] = []
    for i in range(1, len(parts) - 1, 2):
        rows.append(parse_row_chunk(int(parts[i]), parts[i + 1]))
    return rows


def heatmap_total(heatmap_path: str) -> int:
    """Total submissions recorded in heatmap.json, or 0 when unavailable."""
    path = Path(heatmap_path)
    if not path.is_file():
        return 0
    try:
        activity = json.loads(path.read_text(encoding="utf-8"))["activity"]
        return sum(int(value) for value in activity.values())
    except (ValueError, KeyError, TypeError):
        return 0


def resolve_sessionid(args) -> str | None:
    if args.sessionid:
        return args.sessionid
    env = os.environ.get("DMOJ_SESSIONID")
    if env:
        return env.strip()
    path = Path(args.sessionid_file)
    if path.is_file():
        value = path.read_text(encoding="utf-8").strip()
        if value:
            return value
    return None


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(
        description="Download all 28tech submissions and source code for a user."
    )
    parser.add_argument("--user", required=True, help="28tech username")
    parser.add_argument("--out-dir", default="data")
    parser.add_argument("--base", default=BASE)
    parser.add_argument("--sessionid", help="value of the 28tech sessionid cookie")
    parser.add_argument("--sessionid-file", default="sessionid.txt")
    parser.add_argument("--username", help="login name (prompted if needed)")
    parser.add_argument("--delay", type=float, default=0.4, help="seconds between requests")
    parser.add_argument("--limit", type=int, default=0, help="only fetch N sources (smoke test)")
    parser.add_argument("--refresh", action="store_true", help="re-download cached sources")
    parser.add_argument("--max-pages", type=int, default=200)
    parser.add_argument(
        "--heatmap",
        default="heatmap.json",
        help="heatmap.json, used to sanity-check the number of submissions found",
    )
    args = parser.parse_args(argv)

    out_dir = Path(args.out_dir)
    source_dir = out_dir / "source"
    source_dir.mkdir(parents=True, exist_ok=True)
    manifest_path = out_dir / "submissions.json"

    client = Client(base=args.base, delay=args.delay)

    # ---- authenticate -------------------------------------------------------
    sessionid = resolve_sessionid(args)
    if sessionid:
        client.set_sessionid(sessionid)
        print("auth       : sessionid cookie")
    else:
        print("auth       : username/password prompt")
        sys.stdout.flush()
        username = args.username or input("28tech username: ").strip()
        try:
            password = getpass.getpass("28tech password (not stored): ")
        except (EOFError, KeyboardInterrupt):
            raise SystemExit(
                "\nNo password entered.\n"
                "For non-interactive use, supply the session cookie instead:\n"
                "  --sessionid VALUE, the DMOJ_SESSIONID variable, or sessionid.txt"
            )
        client.login_with_password(username, password)

    if not client.is_logged_in():
        raise SystemExit(
            "Not authenticated: the site still shows a login link, so this session\n"
            "is not signed in.\n\n"
            "The heatmap and the submission list are public, but source code is\n"
            "visible only to its author, so a real session is required:\n"
            "  * sessionid route - log in at https://oj.28tech.com.vn, copy the\n"
            "    'sessionid' cookie from DevTools, and save it to sessionid.txt\n"
            "  * password route  - run again without a sessionid to be prompted\n"
        )
    print("logged in  : yes")

    # ---- list every submission ---------------------------------------------
    print("listing submissions ...")
    submissions: dict[int, dict] = {}
    if manifest_path.is_file():
        try:
            existing = json.loads(manifest_path.read_text(encoding="utf-8"))
            for row in existing.get("submissions", []):
                submissions[int(row["id"])] = row
            print(f"  cached manifest: {len(submissions)} submissions")
        except (ValueError, KeyError):
            pass

    page = 1
    while page <= args.max_pages:
        body = client.list_page(args.user, page)
        rows = parse_list_page(body)
        if not rows:
            break
        for row in rows:
            submissions[row["id"]] = row
        print(f"  page {page}: +{len(rows)} (total {len(submissions)})")
        if len(rows) < 50:
            break
        page += 1

    ordered = sorted(
        submissions.values(),
        key=lambda r: (r.get("timestamp_utc") or "", r["id"]),
    )
    print(f"total      : {len(ordered)} submissions")

    # An anonymous session still lists the author's *public* submissions, so a
    # count far below the heatmap's total is the clearest sign of a filtered
    # (i.e. unauthenticated) view.
    expected_total = heatmap_total(args.heatmap)
    if expected_total and expected_total != len(ordered):
        print(
            f"warning    : the heatmap reports {expected_total} submissions but the "
            f"list returned {len(ordered)}."
        )
        if len(ordered) < expected_total:
            print(
                "             The list is probably filtered because the session is\n"
                "             not really signed in; source downloads will fail."
            )

    # ---- fetch source -------------------------------------------------------
    pending = []
    for row in ordered:
        ext = extension_for(row["language"])
        target = source_dir / f"{row['id']}{ext}"
        row["source_file"] = str(target.relative_to(out_dir)).replace("\\", "/")
        if args.refresh or not target.is_file() or target.stat().st_size == 0:
            pending.append((row, target))

    if args.limit:
        pending = pending[: args.limit]

    def write_manifest() -> None:
        manifest_path.write_text(
            json.dumps(
                {
                    "user": args.user,
                    "base": args.base,
                    "fetched_at": datetime.now(timezone.utc).isoformat(),
                    "count": len(ordered),
                    "submissions": ordered,
                },
                indent=2,
                ensure_ascii=False,
            ),
            encoding="utf-8",
        )

    # Persist the listing before the long download so an interrupted run is
    # resumable without re-crawling every page.
    write_manifest()

    print(f"to fetch   : {len(pending)} source files")
    failures: list[tuple[int, str]] = []
    try:
        for index, (row, target) in enumerate(pending, start=1):
            try:
                text, _how = client.fetch_source(row["id"])
                target.write_text(text, encoding="utf-8", newline="\n")
            except NotAuthenticated:
                raise
            except (urllib.error.HTTPError, RuntimeError, OSError) as exc:
                failures.append((row["id"], str(exc)))
                print(f"  ! {row['id']}: {exc}")
            if index % 25 == 0 or index == len(pending):
                print(f"  {index}/{len(pending)}")
    except NotAuthenticated as exc:
        write_manifest()
        print(
            f"\nSession no longer valid: {exc}\n"
            "The listing has been saved, so just log back in, refresh sessionid.txt\n"
            "and re-run the same command - already-downloaded sources are skipped."
        )
        return 1

    if failures:
        print(f"\n{len(failures)} source(s) failed; re-run to retry them.")

    write_manifest()
    print(f"\nmanifest   : {manifest_path}")
    print(f"sources    : {source_dir}")
    return 1 if failures else 0


if __name__ == "__main__":
    sys.exit(main())
