// /Script/Icarus.InventorySlotOverride
// size 0x38, declared in Icarus/Source/Icarus/Traits/Behaviours/Inventory/InventoryData.h

USTRUCT()
struct FInventorySlotOverride : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle Query;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Location;  // 0x0030, size 0x4
};
