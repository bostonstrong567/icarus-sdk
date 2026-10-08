#!/bin/bash
# Asks Steam which build of the Icarus dedicated server is out and, when it is a new one, makes everything again.
# Run by the timer wax-game. FORCE=1 makes it again for the build that is already made.
set -uo pipefail
REPO="$(cd "$(dirname "$0")/.." && pwd)"
BASE="$(dirname "$REPO")"
STATE="$BASE/state"; LOGS="$BASE/logs"; PUBLIC="$BASE/public"
APP=2089300; DEPOT=2089301; CLIENT=1149460
TRIES=3
mkdir -p "$STATE" "$LOGS" "$PUBLIC"
exec 9>"$STATE/lock"
flock -n 9 || exit 0

status() {
    python3 "$REPO/pipeline/status.py" "$BASE" "$REPO" "$1" "${2:-}" > "$PUBLIC/status.json.new" && mv "$PUBLIC/status.json.new" "$PUBLIC/status.json"
}

rm -rf "$STATE/check"; mkdir -p "$STATE/check"
if ! "$BASE/tools/dd/DepotDownloader" -app $APP -os windows -manifest-only -dir "$STATE/check" > "$LOGS/check.log" 2>&1 < /dev/null; then
    status unreachable; exit 0
fi
manifest=$(ls "$STATE/check" | sed -n "s/^manifest_${DEPOT}_\([0-9]*\)\.txt$/\1/p" | head -1)
[ -n "$manifest" ] || { status unreachable; exit 0; }
echo "$manifest" > "$STATE/seen"
# The client's build number and its DLCs, for the status only.
curl -s -m 20 "https://api.steamcmd.net/v1/info/$CLIENT" -o "$STATE/steam.json.new" && python3 -c "import json,sys; json.load(open(sys.argv[1]))['data']" "$STATE/steam.json.new" 2>/dev/null && mv "$STATE/steam.json.new" "$STATE/steam.json"

have=$(cat "$STATE/manifest" 2>/dev/null || true)
if [ "$manifest" = "$have" ] && [ -z "${FORCE:-}" ]; then status current; exit 0; fi

failed=$(cat "$STATE/failed" 2>/dev/null || true)
if [ -z "${FORCE:-}" ] && [ "${failed%% *}" = "$manifest" ] && [ "${failed##* }" -ge $TRIES ]; then status failed "gave up after $TRIES tries"; exit 0; fi

log="$LOGS/build-$manifest-$(date +%Y%m%d-%H%M%S).log"
status building
if bash "$REPO/pipeline/build.sh" "$manifest" > "$log" 2>&1; then
    echo "$manifest" > "$STATE/manifest"; rm -f "$STATE/failed"
    status current
else
    count=1; [ "${failed%% *}" = "$manifest" ] && count=$(( ${failed##* } + 1 ))
    echo "$manifest $count" > "$STATE/failed"
    status failed "$(grep -v '^\s*$' "$log" | tail -1 | cut -c1-300)"
fi
ls -t "$LOGS"/build-*.log 2>/dev/null | tail -n +21 | xargs -r rm -f
