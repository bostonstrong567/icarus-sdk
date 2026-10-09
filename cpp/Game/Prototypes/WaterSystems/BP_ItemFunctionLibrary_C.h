// /Game/Prototypes/WaterSystems/BP_ItemFunctionLibrary.BP_ItemFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ItemFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static void FillableSupports(UFillableComponent* Target, UFillableComponent* Source, UObject* __WorldContext, bool& Supports);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static void FillableTypeToInt(FIcarusResourcesEnum Type, UObject* __WorldContext, int32& Int);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static void Get_Damage_Variation(FItemData Item, bool Melee, UObject* __WorldContext, int32& Minimum, int32& Maximum);  // parameters 0x208, named "Get Damage Variation"
    UFUNCTION(BlueprintCallable) static void Get_Damage_Variation_Specific(UObject* Context, FItemData Item, FStatsEnum Damage, FStatsEnum Variation, UObject* __WorldContext, int32& Minimum, int32& Maximum);  // parameters 0x228, named "Get Damage Variation Specific"
    UFUNCTION(BlueprintCallable) static void GetNumDeployableVariations(const FDeployableData& DeployableData, UObject* __WorldContext, int32& NumVariants);  // parameters 0xB4
    UFUNCTION(BlueprintCallable, BlueprintPure) static void IntToFillableType(int32 Int, UObject* __WorldContext, FIcarusResourcesEnum& Type);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void MergeItemDataIntoArray(TArray<FItemData>& Items, FItemData NewItem, UObject* __WorldContext);  // parameters 0x208
    UFUNCTION(BlueprintCallable, BlueprintPure) static void QuickMakeItem(FItemTemplateRowHandle Item, UObject* __WorldContext, FItemData& CreatedItem);  // parameters 0x210
    UFUNCTION(BlueprintCallable, BlueprintPure) static void QuickMakeItemStack(FItemTemplateRowHandle Item, int32 Count, UObject* __WorldContext, FItemData& CreatedItem);  // parameters 0x218
    UFUNCTION(BlueprintCallable, BlueprintPure) static void QuickMakeQuestItem(FItemTemplateRowHandle Item, UObject* __WorldContext, FItemData& CreatedItem);  // parameters 0x210
    UFUNCTION(BlueprintCallable, BlueprintPure) static void QuickMakeQuestItemStack(FItemTemplateRowHandle Item, int32 Count, UObject* __WorldContext, FItemData& CreatedItem);  // parameters 0x218
};
