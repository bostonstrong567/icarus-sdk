// /Game/UI/Components/FieldGuide/UMG_FieldGuideItem_RecipeOrCost.UMG_FieldGuideItem_RecipeOrCost_C
// Derives from: UFieldGuideItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0x300, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItem_RecipeOrCost_C : public UFieldGuideItemWidgetBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_95;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ItemRecipes;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* RecipeOrWorkShop;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* RecipiesScroll;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_Workshop_C* WorkshopCost;  // 0x02F8, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItem_RecipeOrCost(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitFieldGuideView(FItemsStaticRowHandle ItemIn, FFieldGuideCategoriesRowHandle CategoryIn, FFieldGuideSubcategoriesRowHandle SubcategoryIn);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void PopulateFromRecipeSet(FRecipeSetsRowHandle RecipeSet);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void PopulateRecipeOrCostDetail(FItemsStaticRowHandle ItemRow, FFieldGuideCategoriesRowHandle CategoryRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void PopulateResourceRecipe(bool& Handled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RecipeOrCostClicked(FFieldGuideCategoriesRowHandle CategoryRow, FItemsStaticRowHandle ItemRow);  // parameters 0x30
};
