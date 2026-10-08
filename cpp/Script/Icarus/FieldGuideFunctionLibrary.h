// /Script/Icarus.FieldGuideFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/FieldGuide/FieldGuideFunctionLibrary.h

UCLASS()
class UFieldGuideFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetAllArmorHelmets();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<FFieldGuideCategoriesRowHandle> GetAllCategoryDisplayOrder();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetAllCropPlots();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetAllItemsCraftedAt(FItemsStaticRowHandle Item);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetAllItemsForCategory(FFieldGuideCategoriesRowHandle Category);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetAllItemsForSubcategory(FFieldGuideSubcategoriesRowHandle Subcategory);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetAllItemsRequiringSameTalent(FItemsStaticRowHandle Item);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetAmmoTypesForFirearm(FItemsStaticRowHandle Item);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static TArray<FValidAmmoTypesRowHandle> GetAmmoWeaponType(FItemsStaticRowHandle Item);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void GetArmorSetFromItem(FItemsStaticRowHandle Item, TArray<FItemsStaticRowHandle>& ArmorSetOut);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetAttachments(FItemsStaticRowHandle Item);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static FBestiaryDataRowHandle GetBeastFromVestige(FItemsStaticRowHandle Item);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static FFieldGuideCategoriesRowHandle GetCategoryForItem(FItemsStaticRowHandle Item);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static FItemsStaticRowHandle GetCorpseFromVestige(FItemsStaticRowHandle Item);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetCorpseSkinningBenchRewards(FItemsStaticRowHandle Item);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetCorpseSkinningKnifeRewards(FItemsStaticRowHandle Item);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetCorpseVestige(FItemsStaticRowHandle Item);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetCorpsesProvidingReward(FItemsStaticRowHandle Item);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetFirearmsThatCanUseAmmo(FItemsStaticRowHandle Item);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static FFishDataRowHandle GetFishData(FItemsStaticRowHandle Item);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static bool GetIsFish(FItemsStaticRowHandle Item);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static FItemsStaticRowHandle GetItemFromItemPack(FItemsStaticRowHandle Item, int32& StackCountOut);  // parameters 0x34
    UFUNCTION(BlueprintCallable) static EFieldGuideItemHotToObtain GetItemHowToObtain(FItemsStaticRowHandle Item);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static FFieldGuideMetaDataRowHandle GetItemMeta(FItemsStaticRowHandle Item);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetItemSet(FItemsStaticRowHandle Item, bool bIncludeItem);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static FItemsStaticRowHandle GetItemToDisplayForContextMenu(const FItemsStaticRowHandle& ItemIn);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetItemsForAttachment(FItemsStaticRowHandle Item);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetItemsMatchingTagQuery(const FTagQueriesRowHandle& TagQueryRow);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetItemsWithDisplayNameMatchingQuery(FString FilterQuery);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetKnivesCanHarvestWith(FItemsStaticRowHandle Item);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static FLivingItemShopItemsRowHandle GetLivingItemShopItems(FItemsStaticRowHandle Item);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static FItemsStaticRowHandle GetPackFromItem(FItemsStaticRowHandle Item);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static FFieldGuideCategoriesRowHandle GetParentCategoryForSubcategory(FFieldGuideSubcategoriesRowHandle Subcategory);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void GetRecipeProductsRequiringInput(FItemsStaticRowHandle IngredientRow, TArray<FItemsStaticRowHandle>& RecipeRowsOut);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void GetRecipesThatProduceOutput(FItemsStaticRowHandle IngredientRow, TArray<FFieldGuideRecipeInfo>& RecipesOut);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static FItemableRowHandle GetSeedDescriptionForPlant(FItemsStaticRowHandle Item);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static FItemableRowHandle GetSeedDescriptionFromPack(FItemsStaticRowHandle Item, int32& CountOut);  // parameters 0x34
    UFUNCTION(BlueprintCallable) static FFieldGuideCategorySubcategoryInfo GetSubcategoryInfoForCategory(FFieldGuideCategoriesRowHandle Category);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static TArray<FItemsStaticRowHandle> GetTrophyKnives();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static FWorkshopItemsRowHandle GetWorkshopItem(FItemsStaticRowHandle Item);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static FItemsStaticRowHandle GetWorkshopSeedPackFromPlant(FItemsStaticRowHandle Item);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static bool HasFieldGuideContextMenu(const FItemsStaticRowHandle& Item);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static bool IsFreshWaterFish(FItemsStaticRowHandle Item);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static FDLCPackageDataRowHandle IsItemBuildableDlc(FItemsStaticRowHandle Item);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static bool IsRecipeInputIngredient(FItemsStaticRowHandle IngredientRow);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static bool IsRecipeOutputProduct(FItemsStaticRowHandle IngredientRow);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static bool IsUsedInRecipes(FItemsStaticRowHandle IngredientRow);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void SetBlockFieldGuideContextMenu(bool bBlock);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static bool ShouldHideItem(const FItemsStaticRowHandle& Item);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static bool ShowFieldGuideExtended();  // parameters 0x1
};
