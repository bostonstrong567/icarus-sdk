"""Writes the status the site shows: what Steam has, what the SDK was made from, and whether a build is running."""
import json
import os
import sys
import time

base, repo, state, note = sys.argv[1:5]


def text(name):
    try:
        with open(os.path.join(base, "state", name), encoding="utf-8") as file:
            return file.read().strip()
    except OSError:
        return None


def data(path):
    try:
        with open(path, encoding="utf-8") as file:
            return json.load(file)
    except (OSError, ValueError):
        return None


steam = {"server_manifest": text("seen")}
app = data(os.path.join(base, "state", "steam.json"))
if app:
    try:
        app = next(iter(app["data"].values()))
        public = app["depots"]["branches"]["public"]
        steam["client_build"] = public["buildid"]
        steam["updated"] = time.strftime("%Y-%m-%d %H:%M UTC", time.gmtime(int(public["timeupdated"])))
        steam["dlc"] = len([n for n in app.get("extended", {}).get("listofdlc", "").split(",") if n.strip()])
    except (KeyError, StopIteration, ValueError):
        pass
made = data(os.path.join(repo, "build.json")) if text("manifest") else None
json.dump({
    "state": state,
    "note": note or None,
    "checked": time.strftime("%Y-%m-%d %H:%M UTC", time.gmtime()),
    "steam": steam,
    "sdk": made and {key: made.get(key) for key in ("game_version", "manifest", "build_id", "made", "counts")},
    "up_to_date": bool(made) and made.get("manifest") == steam["server_manifest"],
}, sys.stdout, indent=2)
print()
