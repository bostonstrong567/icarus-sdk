// /Script/Icarus.FindItemSlotInfo
// size 0x10, declared in Icarus/Source/Icarus/Traits/Behaviours/Inventory/FindItemSlotInfo.h

USTRUCT()
struct FFindItemSlotInfo
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x0000, size 0x8
    UPROPERTY(BlueprintReadWrite) int32 Slot;  // 0x0008, size 0x4
};
