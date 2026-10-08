// /Script/Icarus.RepairableItem
// size 0x220, declared in Icarus/Source/Icarus/Systems/Repair/RepairFunctionLibrary.h

USTRUCT()
struct FRepairableItem
{
    UPROPERTY(BlueprintReadOnly) FItemData Item;  // 0x0000, size 0x1F0
    UPROPERTY(BlueprintReadOnly) ECanRepair Status;  // 0x01F0, size 0x1
    UPROPERTY(BlueprintReadOnly) int32 HealthPercent;  // 0x01F4, size 0x4
    UPROPERTY(BlueprintReadOnly) TArray<FQueueItem> RepairMaterials;  // 0x01F8, size 0x10
    UPROPERTY(BlueprintReadOnly) bool bIsArmor;  // 0x0208, size 0x1
    UPROPERTY(BlueprintReadOnly) ERepairItemTier Tier;  // 0x0209, size 0x1
    UPROPERTY(Instanced, BlueprintReadOnly) UInventory* SourceInventory;  // 0x0210, size 0x8
    UPROPERTY(BlueprintReadOnly) int32 SourceInventorySlot;  // 0x0218, size 0x4
};
