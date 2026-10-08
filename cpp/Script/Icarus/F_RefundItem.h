// /Script/Icarus.RefundItem
// size 0x1C, declared in Icarus/Source/Icarus/Inventory/InventoryItemLibrary.h

USTRUCT()
struct FRefundItem
{
    UPROPERTY(BlueprintReadWrite) FItemsStaticRowHandle ItemType;  // 0x0000, size 0x18
    UPROPERTY(BlueprintReadWrite) int32 StackSize;  // 0x0018, size 0x4
};
