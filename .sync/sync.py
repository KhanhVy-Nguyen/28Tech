#!/usr/bin/env python3
"""Incremental sync: append backdated commits for new 28tech submissions.

Run from the root of the mirror repository (the one build_repo.py made,
already containing history). Steps:

  1. scrape the public heatmap (no login needed)
  2. count commits per day authored by --email in this repository
  3. if 28tech credentials are in the environment, fetch new submissions and
     commit their real source code into days that are short
  4. fill any remaining shortfall with placeholder commits, so the
     contribution graph always matches the heatmap

Credentials (optional, environment only):
    DMOJ_SESSIONID                   the sessionid cookie, or
    DMOJ_USERNAME + DMOJ_PASSWORD    password login

Pushing is left to the caller (the GitHub Actions workflow runs `git push`).
"""

from __future__ import annotations

import argparse
import os
import re
import subprocess
import sys
import urllib.error
from collections import Counter
from datetime import datetime, timedelta
from pathlib import Path

import build_repo as br
import fetch_heatmap as fh
import fetch_submissions as fs

ID_RE = re.compile(r"^(\d+)_")
GAP_RE = re.compile(r"^not-retrievable-\d{8}-(\d+)\.txt$")


def git(*args: str) -> str:
    return subprocess.run(
        ["git", *args], check=True, text=True, encoding="utf-8", stdout=subprocess.PIPE
    ).stdout


def committed_days(email: str) -> Counter:
    days: Counter = Counter()
    for line in git("log", "--format=%ae %ad", "--date=iso-strict").splitlines():
        author, _, date = line.partition(" ")
        if author == email:
            days[date[:10]] += 1
    return days


def known_ids() -> set[int]:
    return {
        int(m.group(1))
        for p in Path(br.SUBMISSIONS_DIR).glob("*/*")
        if (m := ID_RE.match(p.name))
    }


def warn(msg: str) -> None:
    # ::warning:: shows up as an annotation on the GitHub Actions run page.
    print(f"::warning::{msg}")


def login() -> fs.Client | None:
    sid = os.environ.get("DMOJ_SESSIONID", "").strip()
    name = os.environ.get("DMOJ_USERNAME", "").strip()
    password = os.environ.get("DMOJ_PASSWORD", "")
    if not sid and not (name and password):
        print("auth       : none (placeholders only)")
        return None
    client = fs.Client()
    try:
        if sid:
            client.set_sessionid(sid)
        else:
            client.login_with_password(name, password)
        if client.is_logged_in():
            print("auth       : logged in")
            return client
    except (SystemExit, urllib.error.URLError, OSError) as exc:
        warn(f"28tech login error: {exc}")
    warn("28tech login failed - new days get placeholder commits. Refresh the secret.")
    return None


def new_submissions(client: fs.Client, user: str, known: set[int]) -> list[dict]:
    """Submissions newer than anything already mirrored (list is newest first)."""
    rows: list[dict] = []
    for page in range(1, 41):
        batch = fs.parse_list_page(client.list_page(user, page))
        fresh = [r for r in batch if r["id"] not in known]
        rows += fresh
        if len(batch) < 50 or len(fresh) < len(batch):
            break
    return [r for r in rows if r.get("timestamp_utc")]


def commit(path: str, body: bytes, message: bytes, when: datetime, name: str, email: str) -> None:
    target = Path(path)
    target.parent.mkdir(parents=True, exist_ok=True)
    target.write_bytes(body)
    stamp = when.isoformat()
    env = {
        **os.environ,
        "GIT_AUTHOR_NAME": name, "GIT_AUTHOR_EMAIL": email, "GIT_AUTHOR_DATE": stamp,
        "GIT_COMMITTER_NAME": name, "GIT_COMMITTER_EMAIL": email, "GIT_COMMITTER_DATE": stamp,
    }
    subprocess.run(["git", "add", "--", path], check=True)
    subprocess.run(["git", "commit", "-q", "-F", "-"], input=message, env=env, check=True)


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--user", required=True, help="28tech username")
    parser.add_argument("--name", required=True, help="git author name")
    parser.add_argument("--email", required=True, help="git author email (GitHub noreply)")
    args = parser.parse_args(argv)

    activity, _ = fh.parse_heatmap(fh.fetch_profile_html(args.user))
    have = committed_days(args.email)
    shortfall = {d: int(c) - have.get(d, 0) for d, c in activity.items() if int(c) > have.get(d, 0)}
    print(f"heatmap    : {sum(activity.values())} submissions on {len(activity)} days")
    print(f"repository : {sum(have.values())} commits by {args.email}")
    if not shortfall:
        print("up to date : nothing to commit")
        return 0

    plan: list[tuple[datetime, dict, bytes | None]] = []
    client = login()
    if client:
        try:
            for row in new_submissions(client, args.user, known_ids()):
                when = br.local_time(row)
                day = when.strftime("%Y-%m-%d")
                if shortfall.get(day, 0) <= 0:
                    continue
                row["source_file"] = "x" + fs.extension_for(row["language"])
                try:
                    text, _ = client.fetch_source(row["id"])
                    source = text.encode("utf-8")
                except (fs.NotAuthenticated, urllib.error.URLError, RuntimeError, OSError) as exc:
                    warn(f"source of {row['id']} unavailable: {exc}")
                    source = None
                plan.append((when, row, source))
                shortfall[day] -= 1
        except (fs.NotAuthenticated, urllib.error.URLError, OSError) as exc:
            warn(f"listing submissions failed: {exc}")

    now = datetime.now(br.TZ)
    for day, missing in sorted(shortfall.items()):
        if missing <= 0:
            continue
        folder = Path(br.SUBMISSIONS_DIR) / day
        used = [int(m.group(1)) for p in folder.glob("*") if (m := GAP_RE.match(p.name))]
        start = max(used, default=0)
        midnight = datetime.fromisoformat(day).replace(tzinfo=br.TZ)
        for i in range(1, missing + 1):
            when = midnight + timedelta(minutes=8 * 60 + (i * 13 * 60) // (missing + 1))
            when = min(when, now)  # never date a placeholder in the future
            row = {"id": 0, "synthetic": True, "gap_index": start + i}
            plan.append((when, row, None))

    plan.sort(key=lambda item: item[0])
    real = sum(1 for _, r, _ in plan if not r.get("synthetic"))
    for when, row, source in plan:
        missing_src = source is None
        body = br.placeholder_body(row, when) if missing_src else source
        message = br.commit_message(row, when, missing_src and not row.get("synthetic"))
        commit(br.commit_path(row, when), body, message, when, args.name, args.email)

    print(f"committed  : {len(plan)} ({real} real submissions, {len(plan) - real} placeholders)")
    after = committed_days(args.email)
    bad = {d: (c, after.get(d, 0)) for d, c in activity.items() if after.get(d, 0) < int(c)}
    if bad:
        print(f"verify     : still short on {len(bad)} day(s): {bad}")
        return 2
    print("verify     : every heatmap day is covered")
    return 0


if __name__ == "__main__":
    sys.exit(main())
