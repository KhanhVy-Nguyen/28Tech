#!/usr/bin/env python3
"""Extract the submission-activity heatmap of a 28tech (DMOJ) user.

The 28tech profile page renders its heatmap client-side, but the whole
dataset is embedded inline as:

    window.init_submission_table($, {"YYYY-MM-DD": count, ...},
                                 {"min_year": N}, "vi");

This module fetches the profile page and pulls that map back out.

Usage:
    python fetch_heatmap.py <username> [--out heatmap.json]
"""

from __future__ import annotations

import argparse
import json
import re
import sys
import urllib.error
import urllib.request
from datetime import date

BASE_URL = "https://oj.28tech.com.vn/user/{user}"
USER_AGENT = "Mozilla/5.0 (compatible; heatmap-exporter/1.0)"

# Anchors the call; the two JSON blobs are pulled out with a balanced scan.
CALL_RE = re.compile(r"init_submission_table\(\s*\$\s*,\s*", re.S)
YEAR_RE = re.compile(r'"min_year"\s*:\s*(\d+)')


def fetch_profile_html(username: str, timeout: int = 30) -> str:
    url = BASE_URL.format(user=urllib.parse.quote(username))
    req = urllib.request.Request(url, headers={"User-Agent": USER_AGENT})
    with urllib.request.urlopen(req, timeout=timeout) as resp:
        return resp.read().decode("utf-8", "replace")


def _balanced_object(text: str, start: int) -> str:
    """Return the JSON object literal beginning at ``start`` (which must be '{').

    Tracks string literals and escapes so braces inside values cannot
    terminate the scan early.
    """
    if start >= len(text) or text[start] != "{":
        raise ValueError("expected '{' at start of object")

    depth = 0
    in_string = False
    escaped = False

    for i in range(start, len(text)):
        ch = text[i]

        if in_string:
            if escaped:
                escaped = False
            elif ch == "\\":
                escaped = True
            elif ch == '"':
                in_string = False
            continue

        if ch == '"':
            in_string = True
        elif ch == "{":
            depth += 1
        elif ch == "}":
            depth -= 1
            if depth == 0:
                return text[start : i + 1]

    raise ValueError("unbalanced JSON object in page source")


def parse_heatmap(html: str) -> tuple[dict[str, int], dict]:
    """Return (activity_by_isodate, metadata) from a profile page."""
    match = CALL_RE.search(html)
    if not match:
        raise SystemExit(
            "Could not find heatmap data in the page.\n"
            "The profile is probably unlisted or the username does not exist."
        )

    activity_start = html.index("{", match.end() - 1)
    activity_raw = _balanced_object(html, activity_start)
    activity = json.loads(activity_raw)

    # Metadata object follows the activity map: ..., {activity}, {meta}, "vi");
    tail = html[activity_start + len(activity_raw) :]
    meta_match = re.search(r"\{", tail)
    meta: dict = {}
    if meta_match:
        try:
            meta = json.loads(_balanced_object(tail, meta_match.start()))
        except (ValueError, json.JSONDecodeError):
            meta = {}

    year_match = YEAR_RE.search(tail[:400])
    if year_match:
        meta.setdefault("min_year", int(year_match.group(1)))

    return activity, meta


def summarise(activity: dict[str, int], meta: dict) -> dict:
    days = sorted(activity.items())
    total = sum(activity.values())
    return {
        "days_with_activity": len(days),
        "total_submissions": total,
        "first_day": days[0][0] if days else None,
        "last_day": days[-1][0] if days else None,
        "busiest_day": max(activity.items(), key=lambda kv: kv[1]) if activity else None,
        "min_year": meta.get("min_year"),
    }


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("username", help="28tech / DMOJ username")
    parser.add_argument("--out", default="heatmap.json", help="where to write the extracted data")
    args = parser.parse_args(argv)

    activity, meta = parse_heatmap(fetch_profile_html(args.username))

    with open(args.out, "w", encoding="utf-8") as fh:
        json.dump(
            {
                "username": args.username,
                "fetched_on": date.today().isoformat(),
                "min_year": meta.get("min_year"),
                "activity": dict(sorted(activity.items())),
            },
            fh,
            indent=2,
            ensure_ascii=False,
        )

    info = summarise(activity, meta)
    print(f"user            : {args.username}")
    print(f"days with subs  : {info['days_with_activity']}")
    print(f"total submissions: {info['total_submissions']}")
    print(f"range           : {info['first_day']} -> {info['last_day']}")
    print(f"busiest day     : {info['busiest_day']}")
    print(f"written to      : {args.out}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
