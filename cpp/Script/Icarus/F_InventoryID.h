// /Script/Icarus.InventoryID
// size 0x20, declared in Icarus/Source/Icarus/Traits/Behaviours/Inventory/InventoryID.h

USTRUCT()
struct FInventoryID : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PlayerInventory;  // 0x0018, size 0x1
};
