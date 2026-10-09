// /Script/Icarus.FoundItemEntry
// size 0x10, declared in Icarus/Source/Icarus/Traits/Behaviours/Processing/FoundItemEntry.h

USTRUCT()
struct FFoundItemEntry
{
public:
    UInventory * Inventory;  // 0x0000, not reflected
    int32 Count;  // 0x0008, not reflected
    int32 Location;  // 0x000C, not reflected
};
