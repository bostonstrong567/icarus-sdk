// /Script/Icarus.WaterFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Water/WaterFunctionLibrary.h

UCLASS(MinimalAPI)
class UWaterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION() static void AddOrReplaceWaterFlavourAlteration(FAlterationsEnum ExternalAlteration, FCustomProperties& CustomProperties);  // parameters 0x60
    UFUNCTION() static void AddOrReplaceWaterPurityAlteration(FAlterationsEnum ExternalAlteration, FCustomProperties& CustomProperties);  // parameters 0x60
    UFUNCTION(BlueprintCallable) static bool CanWaterItemBeAltered(const FItemData& NewIcarusItem);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable) static int32 FillContainerWithAlteration(TArray<FAlterationsEnum> ExternalAlterations, int32 Units, UInventory* Inventory, int32 Location);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static int32 FillContainerWithAlterationActor(UObject* WorldContextObject, TArray<FAlterationsEnum> ExternalAlterations, int32 Units, AIcarusItem* Item);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) static int32 FillInventoryContainersWithAlteration(FIcarusResourcesEnum Type, int32 Units, TArray<FAlterationsEnum> ExternalAlterations, UInventory* Inventory);  // parameters 0x34
    UFUNCTION(BlueprintCallable) static FAlterationModifiersRowHandle GenerateModifierFromAlteration(FAlterationsEnum Alteration);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static bool GetAlterationModifierEffectiveness(FAlterationsEnum Alteration, int32& Effectiveness);  // parameters 0x15
    UFUNCTION(BlueprintCallable) static bool GetAlterationPriority(FAlterationsEnum Alteration, int32& Priority);  // parameters 0x15
    UFUNCTION(BlueprintCallable) static bool GetAlterationPriorityItem(FItemData Item, int32& Priority);  // parameters 0x1F5
    UFUNCTION(BlueprintCallable) static int32 GetCurrentStoredUnits(const FItemData& NewIcarusItem);  // parameters 0x1F4
    UFUNCTION(BlueprintCallable) static bool IsStoredUnitsFull(const FItemData& NewIcarusItem);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable) static FItemData RemoveAllModifierAlterations(FItemData& NewIcarusItem);  // parameters 0x3E0
    UFUNCTION() static void RemoveAllModifierAlterationsProperties(FCustomProperties& CustomProperties);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static FItemData RemoveAlterationsByModifierPriority(FItemData& NewIcarusItem, FAlterationsEnum PrioAlteration);  // parameters 0x3F0
    UFUNCTION() static void RemoveAlterationsByModifierPriorityProperties(FCustomProperties& NewIcarusItem, FAlterationsEnum PrioAlteration);  // parameters 0x60
    UFUNCTION() static void UpdateWaterAlterations(FAlterationsEnum ExternalAlteration, FCustomProperties& IcarusItemData, const FItemData& Item);  // parameters 0x250
};
