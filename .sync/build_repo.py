#!/usr/bin/env python3
"""Build a git repository from scraped 28tech submissions.

Consumes ``data/submissions.json`` plus ``data/source/*`` (produced by
``fetch_submissions.py``) and writes **one backdated commit per
submission**, so the GitHub contribution graph reproduces the 28tech
submission heatmap while the repository contains the real source code.

Each submission is stored at::

    submissions/<YYYY-MM-DD>/<id>_<problem><ext>

and committed at the submission's own timestamp, expressed in the judge's
timezone (UTC+7) so GitHub buckets it onto the same calendar day the
28tech heatmap uses.

Usage:
    python build_repo.py --repo repo \
        --name KhanhVy-Nguyen --email nnkhanhvy2007@gmail.com \
        --heatmap heatmap.json
"""

from __future__ import annotations

import argparse
import json
import subprocess
import sys
from collections import Counter
from datetime import datetime, timedelta, timezone
from pathlib import Path

# 28tech is a Vietnamese judge; pin the offset so GitHub buckets each
# commit onto the same calendar day the heatmap uses.
TZ = timezone(timedelta(hours=7))
TZ_SUFFIX = "+0700"

README_PATH = "README.md"
SUBMISSIONS_DIR = "submissions"

for _stream in (sys.stdout, sys.stderr):
    if hasattr(_stream, "reconfigure"):
        try:
            _stream.reconfigure(encoding="utf-8", errors="replace")
        except (ValueError, OSError):
            pass


def run_git(args: list[str], cwd: Path, check: bool = True) -> subprocess.CompletedProcess:
    return subprocess.run(
        ["git", *args],
        cwd=str(cwd),
        check=check,
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
    )


def data_block(payload: bytes) -> bytes:
    """Encode a fast-import ``data`` command (exact byte count, then payload)."""
    if not payload.endswith(b"\n"):
        payload += b"\n"
    return b"data " + str(len(payload)).encode() + b"\n" + payload


def local_time(row: dict) -> datetime:
    raw = row.get("timestamp_utc")
    if not raw:
        raise ValueError(f"submission {row.get('id')} has no timestamp")
    moment = datetime.fromisoformat(raw)
    if moment.tzinfo is None:
        moment = moment.replace(tzinfo=timezone.utc)
    return moment.astimezone(TZ)


def commit_path(row: dict, when: datetime) -> str:
    day = when.strftime("%Y-%m-%d")
    if row.get("synthetic"):
        return (
            f"{SUBMISSIONS_DIR}/{day}/"
            f"not-retrievable-{when.strftime('%Y%m%d')}-{row['gap_index']:02d}.txt"
        )
    ext = Path(row.get("source_file", "")).suffix or ".txt"
    problem = row.get("problem") or "unknown"
    return f"{SUBMISSIONS_DIR}/{day}/{row['id']}_{problem}{ext}"


def placeholder_body(row: dict, when: datetime) -> bytes:
    if row.get("synthetic"):
        return (
            "This 28tech submission is no longer reachable.\n"
            "\n"
            "The judge's heatmap records a submission on "
            f"{when.strftime('%Y-%m-%d')}, but it is absent from the account's\n"
            "submission list: it was made to a problem that has since been\n"
            "unpublished or hidden, so neither the submission nor its source can\n"
            "be retrieved through the web interface.\n"
            "\n"
            "The commit exists so the contribution graph still matches the\n"
            "original heatmap.\n"
        ).encode("utf-8")
    return (
        f"// Source code for 28tech submission {row['id']} could not be retrieved.\n"
        f"// See https://oj.28tech.com.vn/src/{row['id']}\n"
    ).encode("utf-8")


def commit_message(row: dict, when: datetime, missing: bool) -> bytes:
    if row.get("synthetic"):
        return "\n".join(
            [
                f"Not retrievable: 28tech submission on {when.strftime('%Y-%m-%d')}",
                "",
                "The 28tech heatmap records a submission on this day, but the",
                "submission itself is no longer reachable - it was made to a problem",
                "that has since been unpublished or hidden, so it does not appear in",
                "the account's submission list and its source cannot be downloaded.",
                "",
                "This commit exists so the contribution graph still matches the",
                "original heatmap.",
                f"time     : {when.strftime('%Y-%m-%d %H:%M:%S %z')}",
            ]
        ).encode("utf-8")

    verdict = row.get("status", "?")
    score = row.get("score") or ""
    score_part = f" ({score})" if score else ""
    lines = [
        f"{verdict}: {row.get('problem_name') or row.get('problem') or 'unknown'}",
        "",
        f"28tech submission {row['id']}",
        f"problem  : {row.get('problem', '')}",
        f"language : {row.get('language', '')}",
        f"verdict  : {verdict}{score_part}",
        f"time     : {when.strftime('%Y-%m-%d %H:%M:%S %z')}",
        f"source   : https://oj.28tech.com.vn/src/{row['id']}",
    ]
    if missing:
        lines += [
            "",
            "Note: the judge did not return this submission's source code when the",
            "mirror was generated; the commit exists to keep the activity graph",
            "faithful to the original heatmap.",
        ]
    return "\n".join(lines).encode("utf-8")


def readme_text(username: str, total: int, days: int, first: str, last: str,
                placeholders: int) -> str:
    placeholder_note = ""
    if placeholders:
        placeholder_note = f"""
## Unreachable submissions

{placeholders} of the {total} commits are placeholders. 28tech's heatmap counts
them, but the submissions themselves are no longer reachable: they were made to
problems that have since been unpublished or hidden, so they are missing from
the account's submission list and their source code cannot be downloaded. Those
commits are dated correctly and marked `not-retrievable-*.txt`, purely so the
contribution graph matches the original heatmap.
"""

    return f"""# 28tech submissions → GitHub activity

This repository mirrors the submission history of
[`{username}`](https://oj.28tech.com.vn/user/{username}) on the 28tech
online judge (a DMOJ fork): every commit is one submission, dated the
moment it was made, carrying the source code that was submitted.

| | |
|---|---|
| Submissions | {total} |
| Active days | {days} |
| First submission | {first} |
| Last submission | {last} |
| Judge timezone | UTC+7 |
| Placeholder commits | {placeholders} |

Layout: `submissions/<date>/<submission-id>_<problem>.<ext>`

Because the commit dates are the original submission dates rather than
the moment this mirror was generated, the contribution graph reproduces
the judge's submission heatmap.
{placeholder_note}
Source: <https://oj.28tech.com.vn/user/{username}>
"""


def build_stream(rows: list[dict], sources: dict[int, bytes], author_name: str,
                 email: str, username: str) -> tuple[bytes, int, list[int]]:
    """Return (fast-import stream, commit count, ids with missing source)."""
    total = len(rows)
    days = sorted({local_time(r).strftime("%Y-%m-%d") for r in rows})
    first = local_time(rows[0]).strftime("%Y-%m-%d") if rows else "-"
    last = local_time(rows[-1]).strftime("%Y-%m-%d") if rows else "-"

    chunks: list[bytes] = []
    missing: list[int] = []
    mark = 0

    for row in rows:
        mark += 1
        when = local_time(row)
        stamp = int(when.timestamp())
        identity = f"{author_name} <{email}> {stamp} {TZ_SUFFIX}".encode()

        payload = sources.get(row["id"])
        is_missing = payload is None
        if is_missing:
            if not row.get("synthetic"):
                missing.append(row["id"])
            payload = placeholder_body(row, when)

        commit = [b"commit refs/heads/main\n"]
        commit.append(b"mark :" + str(mark).encode() + b"\n")
        commit.append(b"author " + identity + b"\n")
        commit.append(b"committer " + identity + b"\n")
        commit.append(data_block(commit_message(row, when, is_missing)))
        if mark > 1:
            commit.append(b"from :" + str(mark - 1).encode() + b"\n")

        if mark == 1:
            commit.append(b"M 100644 inline " + README_PATH.encode() + b"\n")
            commit.append(
                data_block(
                    readme_text(
                        username,
                        total,
                        len(days),
                        first,
                        last,
                        sum(1 for r in rows if r.get("synthetic")),
                    ).encode("utf-8")
                )
            )

        commit.append(
            b"M 100644 inline " + commit_path(row, when).encode("utf-8") + b"\n"
        )
        commit.append(data_block(payload))

        chunks.append(b"".join(commit))

    # --done makes fast-import reject a truncated stream, but it then
    # requires the stream to be terminated explicitly.
    return b"".join(chunks) + b"done\n", mark, missing


def load_sources(manifest: dict, data_dir: Path) -> dict[int, bytes]:
    sources: dict[int, bytes] = {}
    for row in manifest["submissions"]:
        rel = row.get("source_file")
        if not rel:
            continue
        path = data_dir / rel
        if path.is_file() and path.stat().st_size > 0:
            sources[int(row["id"])] = path.read_bytes()
    return sources


def fill_gaps(rows: list[dict], heatmap_path: str) -> list[dict]:
    """Append synthetic rows covering days where the manifest falls short.

    Some submissions are no longer reachable: they were made to problems that
    have since been unpublished or hidden, so they disappear from the account's
    submission list although the heatmap still counts them. Placeholder rows
    keep the contribution graph faithful to that heatmap.
    """
    path = Path(heatmap_path)
    if not path.is_file():
        return rows

    activity = json.loads(path.read_text(encoding="utf-8"))["activity"]
    expected = {day: int(count) for day, count in activity.items() if int(count) > 0}
    have = Counter(
        local_time(row).strftime("%Y-%m-%d") for row in rows if not row.get("synthetic")
    )

    synthetic: list[dict] = []
    for day in sorted(expected):
        shortfall = expected[day] - have.get(day, 0)
        if shortfall <= 0:
            continue
        midnight = datetime.fromisoformat(day).replace(
            tzinfo=TZ, hour=0, minute=0, second=0, microsecond=0
        )
        for index in range(1, shortfall + 1):
            # Spread the placeholders across a plausible waking window.
            minutes = 8 * 60 + (index * 13 * 60) // (shortfall + 1)
            when = midnight + timedelta(minutes=minutes)
            synthetic.append(
                {
                    "id": -(len(synthetic) + 1),
                    "synthetic": True,
                    "gap_index": index,
                    "status": "??",
                    "language": "",
                    "score": "",
                    "problem": "",
                    "problem_name": "submission not retrievable from 28tech",
                    "timestamp_utc": when.astimezone(timezone.utc).isoformat(),
                    "source_file": None,
                }
            )
    return rows + synthetic


def verify_against_heatmap(repo: Path, heatmap_path: Path) -> bool:
    """Compare per-day commit counts in the repo with the scraped heatmap."""
    result = run_git(
        ["log", "--pretty=format:%ad", "--date=iso-strict", "main"], repo, check=False
    )
    if result.returncode != 0:
        print("verify     : could not read git log")
        return False

    committed: Counter[str] = Counter()
    for line in result.stdout.splitlines():
        line = line.strip()
        if line:
            committed[line[:10]] += 1

    heatmap = json.loads(heatmap_path.read_text(encoding="utf-8"))["activity"]
    expected = {day: int(count) for day, count in heatmap.items() if int(count) > 0}

    only_repo = {d: c for d, c in committed.items() if expected.get(d, 0) != c}
    mismatches = {
        day: (expected.get(day, 0), committed.get(day, 0))
        for day in sorted(set(expected) | set(committed))
        if expected.get(day, 0) != committed.get(day, 0)
    }

    print(f"verify     : {sum(committed.values())} commits on "
          f"{len(committed)} days vs heatmap {sum(expected.values())} on {len(expected)} days")
    if mismatches:
        print(f"verify     : {len(mismatches)} day(s) differ (heatmap, repo):")
        for day, (want, got) in list(mismatches.items())[:15]:
            print(f"             {day}: expected {want}, got {got}")
        if len(mismatches) > 15:
            print(f"             ... and {len(mismatches) - 15} more")
        return False
    print("verify     : per-day commit counts match the 28tech heatmap exactly")
    return True


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--data-dir", default="data")
    parser.add_argument("--repo", default="repo")
    parser.add_argument("--name", required=True, help="git author/committer name")
    parser.add_argument("--email", required=True, help="git author/committer email")
    parser.add_argument("--branch", default="main")
    parser.add_argument("--heatmap", default="", help="heatmap.json to verify against")
    parser.add_argument(
        "--no-fill-gaps",
        action="store_true",
        help="do not add placeholder commits for unreachable submissions",
    )
    args = parser.parse_args(argv)

    data_dir = Path(args.data_dir)
    manifest_path = data_dir / "submissions.json"
    if not manifest_path.is_file():
        raise SystemExit(
            f"{manifest_path} not found - run fetch_submissions.py first."
        )

    manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    username = manifest.get("user", "unknown")
    rows = sorted(
        manifest["submissions"],
        key=lambda r: (r.get("timestamp_utc") or "", int(r["id"])),
    )
    if not rows:
        raise SystemExit("the manifest contains no submissions")

    if args.heatmap and not args.no_fill_gaps:
        before = len(rows)
        rows = fill_gaps(rows, args.heatmap)
        rows.sort(key=lambda r: (r.get("timestamp_utc") or "", int(r["id"])))
        added = len(rows) - before
        if added:
            print(
                f"gap fill   : {added} placeholder commit(s) for submissions that are\n"
                "             no longer reachable (problems unpublished since)"
            )

    sources = load_sources(manifest, data_dir)
    print(f"submissions: {len(rows)}")
    print(f"sources    : {len(sources)} available")

    repo = Path(args.repo).resolve()
    repo.mkdir(parents=True, exist_ok=True)
    if (repo / ".git").exists():
        raise SystemExit(f"{repo} already contains a .git directory; remove it first")

    run_git(["init", "-q", "-b", args.branch], repo)
    # Keep every file byte-exact; a CRLF rewrite would make each commit
    # touch every previously added line.
    run_git(["config", "core.autocrlf", "false"], repo)
    run_git(["config", "user.name", args.name], repo)
    run_git(["config", "user.email", args.email], repo)

    stream, commits, missing = build_stream(
        rows, sources, args.name, args.email, username
    )

    proc = subprocess.run(
        ["git", "fast-import", "--quiet", "--done"],
        cwd=str(repo),
        input=stream,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
    )
    if proc.returncode != 0:
        sys.stderr.write(proc.stderr.decode("utf-8", "replace"))
        return proc.returncode

    run_git(["reset", "--hard", "-q", args.branch], repo)
    subprocess.run(["git", "gc", "--quiet"], cwd=str(repo), check=False)

    head = run_git(["log", "-1", "--format=%H"], repo).stdout.strip()
    print(f"repository : {repo}")
    print(f"commits    : {commits}")
    print(f"head       : {head}")
    if missing:
        print(f"missing src: {len(missing)} submission(s) had no source (placeholder written)")

    ok = True
    if args.heatmap and Path(args.heatmap).is_file():
        ok = verify_against_heatmap(repo, Path(args.heatmap))
    return 0 if ok else 2


if __name__ == "__main__":
    sys.exit(main())
