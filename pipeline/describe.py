"""Writes build.json: which build of the game the files of this repository were made from."""
import json
import sys
import time

model_file, manifest, steam_file = sys.argv[1:4]
with open(model_file, encoding="utf-8") as file:
    model = json.load(file)
build = model.get("build", {})
client = {}
try:
    with open(steam_file, encoding="utf-8") as file:
        app = next(iter(json.load(file)["data"].values()))
    client = {"build": app["depots"]["branches"]["public"]["buildid"],
              "dlc": sorted(int(n) for n in app.get("extended", {}).get("listofdlc", "").split(",") if n.strip())}
except (OSError, ValueError, KeyError, StopIteration):
    pass
json.dump({
    "game_version": build.get("project_version"),
    "manifest": manifest,
    "build_id": build.get("id"),
    "linked": time.strftime("%Y-%m-%d", time.gmtime(build["linked"])) if build.get("linked") else None,
    "made": time.strftime("%Y-%m-%d %H:%M UTC", time.gmtime()),
    "source": "dedicated server (Steam app 2089300)",
    "client_build": client.get("build"),
    "dlc": client.get("dlc", []),
    "counts": model.get("counts", {}),
}, sys.stdout, indent=2)
print()
