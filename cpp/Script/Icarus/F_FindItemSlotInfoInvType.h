// /Script/Icarus.FindItemSlotInfoInvType
// size 0x18, declared in Icarus/Source/Icarus/Traits/Behaviours/Inventory/FIndItemSlotInfoInvType.h

USTRUCT()
struct FFindItemSlotInfoInvType
{
public:
    UPROPERTY(BlueprintReadWrite) FInventoryIDEnum InventoryID;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadWrite) int32 Slot;  // 0x0010, size 0x4
};
