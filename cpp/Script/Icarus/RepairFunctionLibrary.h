// /Script/Icarus.RepairFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Repair/RepairFunctionLibrary.h

UCLASS()
class URepairFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void GetPlayerMaterials(AIcarusPlayerCharacter* Character, const TArray<FRepairableItem>& RepairListIn, TArray<FQueueItem>& MaterialsOut);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void GetQueueItemDetails(const FQueueItem& QueueItem, FItemsStaticRowHandle& Item, int32& Count);  // parameters 0x64
    UFUNCTION(BlueprintCallable) static void GetRepairableItems(TArray<UInventory*> Inventories, TArray<FRepairableItem>& RepairListOut, bool bHavePower, bool bArmor, bool bWorkshopOnly, bool bExcludeWorkshop);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static bool RepairItemIsArmour(const FItemData& Item);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable) static ERepairItemTier RepairItemTier(const FItemData& Item);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable) static void SortAndTagRepairableItems(TArray<FRepairableItem>& RepairList, const TArray<FQueueItem>& PlayerMaterials);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SplitRepairableItems(const TArray<FRepairableItem>& RepairListIn, TArray<FRepairableItem>& CanRepairOut, TArray<FQueueItem>& CanRepairMaterialsOut, TArray<FQueueItem>& MissingRepairMaterialsOut, TArray<FRepairableItem>& CantRepairOut, TArray<FRepairableItem>& NeedsPowerOut, float RepairThreshold);  // parameters 0x64
};
