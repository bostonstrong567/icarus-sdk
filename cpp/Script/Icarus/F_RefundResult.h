// /Script/Icarus.RefundResult
// size 0x10, declared in Icarus/Source/Icarus/Inventory/InventoryItemLibrary.h

USTRUCT()
struct FRefundResult
{
public:
    UPROPERTY(BlueprintReadWrite) TArray<FRefundItem> RefundedItems;  // 0x0000, size 0x10
};
