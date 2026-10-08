// /Script/Icarus.InventoryBag
// size 0xC, declared in Icarus/Source/Icarus/Traits/Inventory.h

USTRUCT()
struct FInventoryBag
{
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) TWeakObjectPtr<UInventory> Inventory;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentSlotIndex;  // 0x0008, size 0x4
};
