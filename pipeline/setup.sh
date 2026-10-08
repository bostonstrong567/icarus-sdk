#!/bin/bash
# One-time set-up beside a clone of this repository (the clone is <base>/sdk): the tools and the timer.
# Needs python3, dotnet 8, node, git, gh (signed in), curl, unzip, xz.
set -euo pipefail
REPO="$(cd "$(dirname "$0")/.." && pwd)"
BASE="$(dirname "$REPO")"
T="$BASE/ws/tools"; DL="$BASE/dl"
mkdir -p "$BASE/tools/dd" "$T/pak/repak" "$T/assets/Ue4Export" "$T/assets/kismet-analyzer" "$DL"
cd "$DL"
get() { curl -sfL -o "$2" "$1"; }

get https://github.com/SteamRE/DepotDownloader/releases/latest/download/DepotDownloader-linux-x64.zip dd.zip
unzip -oq dd.zip -d "$BASE/tools/dd"; chmod +x "$BASE/tools/dd/DepotDownloader"

REPAK=v0.2.3
get https://github.com/trumank/repak/releases/download/$REPAK/repak_cli-x86_64-unknown-linux-gnu.tar.xz repak.tar.xz
rm -rf repak; mkdir repak; tar xf repak.tar.xz -C repak
find repak -name repak -type f -exec cp {} "$T/pak/repak/repak.exe" \;
chmod +x "$T/pak/repak/repak.exe"

UE4EXPORT=4.2.1
get https://github.com/CrystalFerrai/Ue4Export/releases/download/$UE4EXPORT/Ue4Export-$UE4EXPORT.zip ue.zip
rm -rf ue; unzip -oq ue.zip -d ue; cp -r ue/Ue4Export/. "$T/assets/Ue4Export/"
printf '#!/bin/sh\nexec dotnet "$(dirname "$0")/Ue4Export.dll" "$@"\n' > "$T/assets/Ue4Export/Ue4Export.exe"
chmod +x "$T/assets/Ue4Export/Ue4Export.exe"

asset="$(curl -s https://api.github.com/repos/trumank/kismet-analyzer/releases/tags/latest | sed -n 's/.*"browser_download_url": "\(.*linux-x64.zip\)".*/\1/p' | head -1)"
get "$asset" ka.zip
rm -rf ka; unzip -oq ka.zip -d ka; cp ka/*/* "$T/assets/kismet-analyzer/"
mv -f "$T/assets/kismet-analyzer/kismet-analyzer" "$T/assets/kismet-analyzer/kismet-analyzer.exe"
chmod +x "$T/assets/kismet-analyzer/kismet-analyzer.exe"

# The readers name the tools by the names they have on Windows, and note their versions from this file.
printf '{ "assets\\\\Ue4Export": "%s", "assets\\\\kismet-analyzer": "%s", "pak\\\\repak": "%s" }\n' \
    "$UE4EXPORT" "$(basename "$asset" .zip)" "$REPAK" > "$T/.versions.json"

units="$HOME/.config/systemd/user"
mkdir -p "$units"
sed "s|@BASE@|$BASE|g" "$REPO/pipeline/wax-game.service" > "$units/wax-game.service"
cp "$REPO/pipeline/wax-game.timer" "$units/wax-game.timer"
export XDG_RUNTIME_DIR="/run/user/$(id -u)"
systemctl --user daemon-reload
systemctl --user enable --now wax-game.timer
echo "Set up in $BASE. First run: systemctl --user start wax-game"
