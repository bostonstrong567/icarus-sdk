// /Script/Icarus.FindAllStacksResult
// size 0x208, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryItemLibrary.generated.h

USTRUCT()
struct FFindAllStacksResult
{
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InventorySlotIndex;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ItemTypeInstance;  // 0x0010, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalStacksCount;  // 0x0200, size 0x4
};
