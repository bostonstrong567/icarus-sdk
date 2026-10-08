# Icarus SDK

Every class of ICARUS, native and blueprint, with its parents, variables and functions, made again by itself
each time the game is updated. It is what [Wax](https://github.com/bostonstrong567/icarus-wax) and its
[class Explorer](https://wax-icarus.duckdns.org/explorer/) are built on.

`build.json` says which build of the game the files here were made from.

| Path | What |
| --- | --- |
| `build.json` | Game version, Steam manifest, date, counts |
| `model/model.json.gz` | The whole model: every class with its parent chain back to `Object`, its C++ name, size, properties (type, flags, offset), functions (parameters, flags, size of the parameter block), structs, enums, delegates |
| `model/index.json.gz` | The same in the shorter shape the editor definitions are written from |
| `cpp/` | Every class and struct as a C++ header to read: what it derives from, each variable with its place, each function with its parameters, and for native classes the members the engine's scripting cannot see. Enums and delegates are in `_Enums.h` and `_Delegates.h` of their module. For reading and searching, not for compiling |
| `mods/` | Table mods (EXMOD). Each is checked against every new build and packed. The paks are the files of the release named `mods` |
| `types/icarus/` | Definitions for the Lua language server: each game class extends its parent, so members complete in the editor |
| `model/oversized_functions.lua` | Functions whose parameters take more than 512 bytes |
| `model/struct_traits.lua` | Structs that carry a vtable pointer |
| `model/blueprint_calls.lua` | Native functions that blueprint code calls |
| `changes/<game version>/` | What that update changed: classes and members, table rows, and names Wax uses that are gone |
| `pipeline/` | The scripts that make all of it |

## How it is made

A server asks Steam every ten minutes which build of the dedicated server is out. For a new one it downloads the
exe, its PDB and the paks, and reads them:

- native classes, structs, enums and functions from the tables in the exe, joined with the type records of the PDB
- blueprint classes from the cooked packages, each tied to its parent through the asset registry
- which functions blueprint code calls, from the bytecode

Nothing is run and no game has to be open. A new DLC arrives as new paks in the same download, so it is read
like any other update. The result is pushed here and to the Explorer on the site.

The dedicated server is read because Steam hands it out without an account. Its code is the game's own; a few
classes that only the client has may be missing.

## Running it yourself

On Linux with python3, dotnet 8, node, git, gh, curl, unzip and xz:

```sh
mkdir icarus && cd icarus
git clone https://github.com/bostonstrong567/icarus-sdk sdk
sdk/pipeline/setup.sh
PUSH=0 bash sdk/pipeline/build.sh "$(date +%s)"
```

It needs about 12 GB for the game's files and 2 GB to work in.
