// /Script/Icarus.FoundItemEntry
// size 0x10, declared in Icarus/Source/Icarus/Traits/Behaviours/Processing/FoundItemEntry.h

USTRUCT()
struct FFoundItemEntry
{

    // Not reflected:
    UInventory * Inventory;  // 0x0000
    int32 Count;  // 0x0008
    int32 Location;  // 0x000C
};
