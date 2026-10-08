#!/usr/bin/env python3
"""EXMOD tooling for Icarus data-table mods.

An .EXMOD is a sparse patch against the game's JSON DataTables:

    { "name": ..., "author": ..., "version": ..., "description": ..., "fileName": ...,
      "Rows": [ { "CurrentFile": "Crafting-D_ProcessorRecipes.json",
                  "File_Items": [ { "Name": "<row name>", "<field>": <new value>, ... } ] } ] }

Each File_Items entry targets the row with that Name. Listed fields replace the row's
top-level fields wholesale (arrays included), a null value removes the field, and an
unknown Name adds a new row. This matches how Icarus Mod Manager and Starlink merge.

Commands:
  apply   <mod.EXMOD> <out_dir>      write patched copies of the touched tables
  diff    <edited_dir> <mod.EXMOD>   derive Rows from hand-edited full tables
  check   <mod.EXMOD>                validate against current game data
  package <mod_dir> <out.EXMODZ>     zip a mod folder into the shareable format
  changes                            what the last game update changed (previous vs data)
  row     <Table> <RowName>          print one row
  find    <regex>                    search row names across every table
"""
import argparse
import json
import re
import sys
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
DEFAULT_BASE = ROOT / "game-data" / "data"
END_MARKER = "endofmod"


def load(path):
    return json.loads(Path(path).read_text(encoding="utf-8-sig"))


def dump(obj, path):
    path = Path(path)
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(obj, indent=4, ensure_ascii=False) + "\n", encoding="utf-8")


def table_index(base):
    """Maps an EXMOD CurrentFile key ('Items-Types-D_FoodTypes.json') to its path relative to base."""
    base = Path(base)
    if not base.is_dir():
        sys.exit(f"Game data not found at {base}. Run scripts\\Export-GameData.ps1 first.")
    return {"-".join(p.relative_to(base).parts).lower(): p.relative_to(base) for p in base.rglob("*.json")}


def current_file_key(rel):
    return "-".join(Path(rel).parts)


def mod_entries(mod):
    for entry in mod.get("Rows", []):
        if entry.get("CurrentFile", "").lower() != END_MARKER:
            yield entry


def rows_by_name(table):
    return {row.get("Name"): row for row in table.get("Rows", [])}


def patch_table(table, items):
    """Applies File_Items to a loaded table in place. Returns (added, changed) row names."""
    by_name = rows_by_name(table)
    added, changed = [], []
    for item in items:
        name = item["Name"]
        row = by_name.get(name)
        if row is None:
            row = {"Name": name}
            table.setdefault("Rows", []).append(row)
            by_name[name] = row
            added.append(name)
        else:
            changed.append(name)
        for field, value in item.items():
            if field == "Name":
                continue
            if value is None:
                row.pop(field, None)
            else:
                row[field] = value
    return added, changed


def cmd_apply(args):
    index = table_index(args.base)
    mod = load(args.exmod)
    written = 0
    for entry in mod_entries(mod):
        rel = index.get(entry["CurrentFile"].lower())
        if rel is None:
            sys.exit(f"error: {entry['CurrentFile']} does not match any table in {args.base}")
        table = load(Path(args.base) / rel)
        added, changed = patch_table(table, entry.get("File_Items", []))
        dump(table, Path(args.out) / rel)
        written += 1
        print(f"  {rel.as_posix()}: {len(changed)} changed, {len(added)} added")
    print(f"{written} table(s) written to {args.out}")


def diff_rows(base_table, edited_table):
    base = rows_by_name(base_table)
    items = []
    for row in edited_table.get("Rows", []):
        name = row.get("Name")
        old = base.get(name)
        if old is None:
            items.append(row)
            continue
        delta = {k: v for k, v in row.items() if k != "Name" and old.get(k) != v}
        delta.update({k: None for k in old if k not in row})
        if delta:
            items.append({"Name": name, **delta})
    removed = [n for n in base if n not in rows_by_name(edited_table)]
    return items, removed


def cmd_diff(args):
    index = table_index(args.base)
    edited_dir = Path(args.edited)
    out = Path(args.exmod)
    stem = out.stem
    mod = load(out) if out.exists() else {
        "name": stem.replace("_", " "), "author": "", "version": "1.0", "description": "",
        "fileName": stem, "readmeURL": "", "imageURL": "", "week": "All", "Level2": "True",
    }
    rows = []
    for path in sorted(edited_dir.rglob("*.json")):
        rel = path.relative_to(edited_dir)
        key = current_file_key(rel)
        base_rel = index.get(key.lower())
        if base_rel is None:
            print(f"warning: {rel} has no matching game table, skipped", file=sys.stderr)
            continue
        items, removed = diff_rows(load(Path(args.base) / base_rel), load(path))
        if removed:
            print(f"warning: {rel}: {len(removed)} row(s) deleted; EXMOD cannot remove rows, ignored "
                  f"({', '.join(removed[:5])}{'...' if len(removed) > 5 else ''})", file=sys.stderr)
        if items:
            rows.append({"CurrentFile": current_file_key(base_rel), "File_Items": items})
            print(f"  {rel.as_posix()}: {len(items)} row(s)")
    mod["Rows"] = rows
    dump(mod, out)
    print(f"wrote {out}")


def iter_row_refs(value, defaults=None):
    """Yields (table, row) for every row handle inside value.

    Rows usually write a handle as just {"RowName": ...}; the target table then comes from the
    same field in the table's Defaults, so defaults is walked alongside value.
    """
    if isinstance(value, dict):
        defaults = defaults if isinstance(defaults, dict) else {}
        table = value.get("DataTableName", defaults.get("DataTableName"))
        if isinstance(value.get("RowName"), str) and isinstance(table, str):
            yield table, value["RowName"]
        for k, v in value.items():
            yield from iter_row_refs(v, defaults.get(k))
    elif isinstance(value, list):
        for v in value:
            yield from iter_row_refs(v)


def cmd_check(args):
    index = table_index(args.base)
    by_table_name = {rel.stem.lower(): rel for rel in index.values()}
    mod = load(args.exmod)
    errors, warnings = [], []

    for field in ("name", "author", "version", "description", "fileName"):
        if not isinstance(mod.get(field), str):
            errors.append(f"missing metadata field '{field}'")
    if mod.get("fileName") and mod["fileName"] != Path(args.exmod).stem:
        warnings.append(f"fileName '{mod['fileName']}' differs from the file's own name")

    entries = list(mod_entries(mod))
    names_cache = {}
    dangling = []

    # Row names are Unreal FNames, which compare case-insensitively.
    def names_of(rel):
        if rel not in names_cache:
            names_cache[rel] = {n.lower() for n in rows_by_name(load(Path(args.base) / rel)) if n}
        return names_cache[rel]

    # Rows this mod adds count as valid reference targets.
    added_here = {}
    for entry in entries:
        rel = index.get(entry.get("CurrentFile", "").lower())
        if rel:
            added_here.setdefault(rel.stem.lower(), set()).update(
                i["Name"].lower() for i in entry.get("File_Items", []) if i.get("Name"))

    seen_files = set()
    for entry in entries:
        cf = entry.get("CurrentFile", "")
        rel = index.get(cf.lower())
        if rel is None:
            errors.append(f"{cf}: no such table in game data")
            continue
        if cf.lower() in seen_files:
            warnings.append(f"{cf}: listed more than once")
        seen_files.add(cf.lower())

        table = load(Path(args.base) / rel)
        defaults = table.get("Defaults", {})
        known_fields = set(defaults)
        for row in table.get("Rows", []):
            known_fields.update(row)
        existing = names_of(rel)
        new, changed = 0, 0
        for item in entry.get("File_Items", []):
            name = item.get("Name")
            if not name:
                errors.append(f"{cf}: an item has no Name")
                continue
            if name.lower() in existing:
                changed += 1
            else:
                new += 1
            for field in item:
                if field not in known_fields:
                    warnings.append(f"{cf}:{name}: field '{field}' is not used by any row in this table")
            for ref_table, ref_row in iter_row_refs(item, defaults):
                if ref_row == "None":
                    continue
                ref_rel = by_table_name.get(ref_table.lower())
                if ref_rel is None:
                    warnings.append(f"{cf}:{name}: references unknown table {ref_table}")
                elif ref_row.lower() not in names_of(ref_rel) and ref_row.lower() not in added_here.get(ref_table.lower(), ()):
                    dangling.append((cf, name, ref_table, ref_row))
        print(f"  {cf}: {changed} existing row(s) changed, {new} new")

    # The base game ships a few hundred handles that point nowhere. A mod repeating one of those is not at fault.
    if dangling:
        vanilla = set()
        for rel in index.values():
            table = load(Path(args.base) / rel)
            for row in table.get("Rows", []):
                for ref_table, ref_row in iter_row_refs(row, table.get("Defaults", {})):
                    ref_rel = by_table_name.get(ref_table.lower())
                    if ref_rel and ref_row != "None" and ref_row.lower() not in names_of(ref_rel):
                        vanilla.add((ref_table.lower(), ref_row.lower()))
        for cf, name, ref_table, ref_row in dangling:
            message = f"{cf}:{name}: {ref_table} has no row '{ref_row}'"
            if (ref_table.lower(), ref_row.lower()) in vanilla:
                warnings.append(message + " (the unmodified game has the same dangling handle)")
            else:
                errors.append(message)

    for w in warnings:
        print(f"warning: {w}")
    for e in errors:
        print(f"error: {e}")
    print(f"{len(errors)} error(s), {len(warnings)} warning(s)")
    sys.exit(1 if errors else 0)


def cmd_package(args):
    mod_dir = Path(args.mod_dir)
    exmods = list(mod_dir.glob("*.EXMOD"))
    if len(exmods) != 1:
        sys.exit(f"expected exactly one .EXMOD in {mod_dir}, found {len(exmods)}")
    exmod = exmods[0]
    name = load(exmod).get("fileName") or exmod.stem
    out = Path(args.out)
    out.parent.mkdir(parents=True, exist_ok=True)
    with zipfile.ZipFile(out, "w", zipfile.ZIP_DEFLATED) as z:
        z.write(exmod, f"Extracted Mods/{name}.EXMOD")
        content = mod_dir / "content"
        extras = [p for p in mod_dir.iterdir() if p.is_file() and p.suffix.lower() in (".md", ".txt", ".png", ".jpg")]
        for p in extras:
            z.write(p, f"{name}/{p.name}")
        if content.is_dir():
            for p in sorted(content.rglob("*")):
                if p.is_file():
                    z.write(p, f"{name}/{p.relative_to(content).as_posix()}")
        count = len(z.namelist())
    print(f"wrote {out} ({count} entries)")


def cmd_changes(args):
    old_dir, new_dir = Path(args.old), Path(args.new)
    if not old_dir.is_dir():
        sys.exit(f"No previous extraction at {old_dir}. It appears after the next game update + Export-GameData.")
    old_idx, new_idx = table_index(old_dir), table_index(new_dir)
    for key in sorted(set(old_idx) | set(new_idx)):
        if key not in new_idx:
            print(f"- table removed: {old_idx[key].as_posix()}")
            continue
        if key not in old_idx:
            print(f"+ table added:   {new_idx[key].as_posix()}")
            continue
        old_path, new_path = old_dir / old_idx[key], new_dir / new_idx[key]
        if old_path.read_bytes() == new_path.read_bytes():
            continue
        old, new = rows_by_name(load(old_path)), rows_by_name(load(new_path))
        added = [n for n in new if n not in old]
        removed = [n for n in old if n not in new]
        changed = [n for n in new if n in old and new[n] != old[n]]
        if not (added or removed or changed):
            continue
        print(f"~ {new_idx[key].as_posix()}: +{len(added)} -{len(removed)} ~{len(changed)}")
        if args.verbose:
            for label, names in (("+", added), ("-", removed), ("~", changed)):
                for n in names:
                    print(f"    {label} {n}")


def resolve_table(base, name):
    index = table_index(base)
    wanted = name.lower().removesuffix(".json")
    hits = [rel for rel in index.values() if rel.stem.lower() == wanted or rel.with_suffix("").as_posix().lower() == wanted]
    if len(hits) != 1:
        sys.exit(f"table '{name}' matched {len(hits)} files")
    return hits[0]


def cmd_row(args):
    rel = resolve_table(args.base, args.table)
    table = load(Path(args.base) / rel)
    row = rows_by_name(table).get(args.name)
    if row is None:
        sys.exit(f"{rel.as_posix()} has no row '{args.name}'")
    if args.with_defaults:
        row = {**table.get("Defaults", {}), **row}
    print(json.dumps(row, indent=4, ensure_ascii=False))


def cmd_find(args):
    pattern = re.compile(args.pattern, re.IGNORECASE)
    base = Path(args.base)
    for rel in sorted(table_index(base).values()):
        for name in rows_by_name(load(base / rel)):
            if name and pattern.search(name):
                print(f"{rel.as_posix()}\t{name}")


def main():
    sys.stdout.reconfigure(encoding="utf-8")
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = parser.add_subparsers(dest="cmd", required=True)

    def add(name, func, *positionals):
        p = sub.add_parser(name)
        for arg in positionals:
            p.add_argument(arg)
        p.add_argument("--base", default=str(DEFAULT_BASE), help="extracted game data (default: game-data/data)")
        p.set_defaults(func=func)
        return p

    add("apply", cmd_apply, "exmod", "out")
    add("diff", cmd_diff, "edited", "exmod")
    add("check", cmd_check, "exmod")
    add("package", cmd_package, "mod_dir", "out")
    add("row", cmd_row, "table", "name").add_argument("--with-defaults", action="store_true")
    add("find", cmd_find, "pattern")
    changes = sub.add_parser("changes")
    changes.add_argument("--old", default=str(ROOT / "game-data" / "previous"))
    changes.add_argument("--new", default=str(DEFAULT_BASE))
    changes.add_argument("-v", "--verbose", action="store_true")
    changes.set_defaults(func=cmd_changes)

    args = parser.parse_args()
    args.func(args)


if __name__ == "__main__":
    main()
