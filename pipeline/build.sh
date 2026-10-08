#!/bin/bash
# Makes everything from one build of the game: downloads it, reads it, writes the SDK and pushes it.
#   build.sh <manifest id>        PUSH=0 leaves the repositories alone.
set -euo pipefail
manifest="$1"
REPO="$(cd "$(dirname "$0")/.." && pwd)"
BASE="$(dirname "$REPO")"
WS="$BASE/ws"; GAME="$BASE/game"; VIEW="$BASE/view"; STATE="$BASE/state"
APP=2089300
WORKERS="${WORKERS:-2}"
OWNER=bostonstrong567
GIT=(git -c credential.helper= -c "credential.helper=!gh auth git-credential" -c user.name=$OWNER -c user.email=$OWNER@users.noreply.github.com)
say() { echo; echo "[$(date +%H:%M:%S)] == $*"; }

say "Game files of manifest $manifest"
"$BASE/tools/dd/DepotDownloader" -app $APP -os windows -dir "$GAME" -filelist "$REPO/pipeline/filelist.txt" < /dev/null | grep -v '%' || true
bin="$GAME/Icarus/Binaries/Win64"; content="$GAME/Icarus/Content"
[ -s "$bin/IcarusServer-Win64-Shipping.exe" ] && [ -s "$bin/IcarusServer-Win64-Shipping.pdb" ] && [ -s "$content/Data/data.pak" ]

# The readers look for the client's file names, so they get a folder of links that carry them.
rm -rf "$VIEW"; mkdir -p "$VIEW/Icarus/Binaries/Win64" "$VIEW/Icarus/Content/Paks" "$VIEW/Icarus/Content/Data"
ln -s "$bin/IcarusServer-Win64-Shipping.exe" "$VIEW/Icarus/Binaries/Win64/Icarus-Win64-Shipping.exe"
ln -s "$bin/IcarusServer-Win64-Shipping.pdb" "$VIEW/Icarus/Binaries/Win64/Icarus-Win64-Shipping.pdb"
ln -s "$content/Data/data.pak" "$VIEW/Icarus/Content/Data/data.pak"
for pak in "$content"/Paks/*.pak; do
    name="$(basename "$pak")"
    ln -s "$pak" "$VIEW/Icarus/Content/Paks/${name/WindowsServer/WindowsNoEditor}"
done

say "Workspace"
mkdir -p "$WS/build" "$WS/game-data"
ln -sfn "$REPO/pipeline/scripts" "$WS/scripts"
if [ -d "$BASE/icarus-wax/.git" ]; then
    git -C "$BASE/icarus-wax" fetch -q --depth 1 origin main && git -C "$BASE/icarus-wax" reset -q --hard origin/main
else
    git clone -q --depth 1 https://github.com/$OWNER/icarus-wax "$BASE/icarus-wax"
fi
ln -sfn "$BASE/icarus-wax/wax" "$WS/wax"
printf '{ "gameDir": "%s" }\n' "$VIEW" > "$WS/icarus.config.json"
cd "$WS"

say "Tables"
repak="$WS/tools/pak/repak/repak.exe"
datapak="$VIEW/Icarus/Content/Data/data.pak"
mount="$("$repak" info "$datapak" | sed -n 's/^mount point: *//p')"
rm -rf game-data/.new
"$repak" unpack --quiet --strip-prefix "$mount" --output game-data/.new "$datapak"
if [ -d game-data/data ] && [ "$(cat game-data/data/.manifest 2>/dev/null)" != "$manifest" ]; then
    rm -rf game-data/previous; mv game-data/data game-data/previous
else
    rm -rf game-data/data
fi
mv game-data/.new game-data/data; echo "$manifest" > game-data/data/.manifest
echo "$(find game-data/data -name '*.json' | wc -l) tables"

# 0 is clean, 2 is written with lines to look at; anything else stops the run unless the step is soft.
py() {
    local soft=0; [ "$1" = soft ] && { soft=1; shift; }
    say "$*"
    local code=0
    nice -n 10 python3 "$@" || code=$?
    if [ $code -eq 2 ]; then echo "CHECK: $1 left lines to look at"; return 0; fi
    if [ $code -ne 0 ] && [ $soft -eq 1 ]; then echo "FAILED (going on): $*"; return 0; fi
    return $code
}
py scripts/gamemodel/native.py
py scripts/gamemodel/assets.py --workers "$WORKERS"
py soft scripts/gamemodel/bytecode.py
py scripts/gamemodel/model.py
py soft scripts/gamemodel/write.py

index=build/game-index/index.json
[ -f $index ] && [ "$(cat build/game-index/.manifest 2>/dev/null)" != "$manifest" ] && cp $index "$STATE/index.before.json"
py scripts/gameindex.py build
echo "$manifest" > build/game-index/.manifest
rm -rf "$REPO/types/icarus"
py scripts/gameindex.py types --out "$REPO/types/icarus"
py scripts/gameindex.py site

say "What changed"
id="$(python3 scripts/gamemodel/build_id.py | head -1)"
model="build/game-model/$id"
rm -rf "$STATE/changes"; mkdir -p "$STATE/changes"
[ -f "$STATE/index.before.json" ] && python3 scripts/gameindex.py diff "$STATE/index.before.json" $index > "$STATE/changes/classes.txt" 2>&1 || true
[ -d game-data/previous ] && python3 scripts/exmod.py changes -v > "$STATE/changes/tables.txt" 2>&1 || true
python3 scripts/gameindex.py needs > "$STATE/changes/wax-needs.txt" 2>&1 || echo "CHECK: Wax uses names this build does not have (changes/wax-needs.txt)"

say "SDK repository"
mkdir -p "$REPO/model"
gzip -9 -n -c "$model/model.json" > "$REPO/model/model.json.gz"
gzip -9 -n -c $index > "$REPO/model/index.json.gz"
for list in oversized_functions.lua struct_traits.lua blueprint_calls.lua; do
    [ -f "$model/$list" ] && cp "$model/$list" "$REPO/model/$list"
done
python3 "$REPO/pipeline/describe.py" "$model/model.json" "$manifest" "$STATE/steam.json" > "$REPO/build.json"
name="$(python3 -c "import json,sys; b=json.load(open(sys.argv[1])); print(b['game_version'] or b['manifest'])" "$REPO/build.json")"
mkdir -p "$REPO/changes/$name"; cp "$STATE"/changes/* "$REPO/changes/$name/" 2>/dev/null || true
if [ "${PUSH:-1}" = 1 ]; then
    cd "$REPO"
    git add -A build.json model types changes
    if git diff --cached --quiet; then echo "nothing new"; else
        "${GIT[@]}" commit -q -m "Game build $name"
        "${GIT[@]}" push -q origin HEAD
        echo "pushed $(git rev-parse --short HEAD)"
    fi
    cd "$WS"
fi

say "The site's Explorer"
explorer() {
    local docs="$BASE/wax-docs-src"
    if [ -d "$docs/.git" ]; then
        "${GIT[@]}" -C "$docs" fetch -q --depth 1 origin main && git -C "$docs" reset -q --hard origin/main
    else
        "${GIT[@]}" clone -q --depth 1 https://github.com/$OWNER/wax-docs "$docs"
    fi
    (cd "$docs" && GAME_INDEX_DIR="$WS/build/game-index/site" node scripts/generate-explorer.mjs)
    [ "${PUSH:-1}" = 1 ] || return 0
    git -C "$docs" add -A public/explorer-data lib/explorer-stamp.json
    if git -C "$docs" diff --cached --quiet; then echo "nothing new"; return 0; fi
    "${GIT[@]}" -C "$docs" commit -q -m "Explorer: game build $name"
    "${GIT[@]}" -C "$docs" push -q origin HEAD:main
    echo "pushed"
}
explorer || echo "FAILED (going on): the site's Explorer"

say "Done: $name"
