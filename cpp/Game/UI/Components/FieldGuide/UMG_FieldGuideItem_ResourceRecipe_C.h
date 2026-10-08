// /Game/UI/Components/FieldGuide/UMG_FieldGuideItem_ResourceRecipe.UMG_FieldGuideItem_ResourceRecipe_C
// Derives from: UFieldGuideItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2F0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItem_ResourceRecipe_C : public UFieldGuideItemWidgetBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ItemRecipes;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* RecipeOrWorkShop;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* RecipiesScroll;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_Workshop_C* WorkshopCost;  // 0x02E8, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItem_ResourceRecipe(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitFieldGuideView(FItemsStaticRowHandle ItemIn, FFieldGuideCategoriesRowHandle CategoryIn, FFieldGuideSubcategoriesRowHandle SubcategoryIn);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void PopulateRecipeOrCostDetail(FItemsStaticRowHandle ItemRow, FFieldGuideCategoriesRowHandle CategoryRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void RecipeOrCostClicked(FFieldGuideCategoriesRowHandle CategoryRow, FItemsStaticRowHandle ItemRow);  // parameters 0x30
};
