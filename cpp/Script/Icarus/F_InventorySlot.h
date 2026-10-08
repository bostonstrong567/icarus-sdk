// /Script/Icarus.InventorySlot
// size 0x240, declared in Icarus/Source/Icarus/Traits/Behaviours/Inventory/InventoryData.h

USTRUCT()
struct FInventorySlot : public FFastArraySerializerItem
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ItemData;  // 0x0010, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle Query;  // 0x0200, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Locked;  // 0x0218, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle LastItem;  // 0x021C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Slotable;  // 0x0234, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Index;  // 0x0238, size 0x4
};
