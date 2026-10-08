// /Game/UI/Components/FieldGuide/UMG_FieldGuideItemOrePage.UMG_FieldGuideItemOrePage_C
// Derives from: UFieldGuidePageWidgetBase > UFieldGuideItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0x340, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItemOrePage_C : public UFieldGuidePageWidgetBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* FuelGrid;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_58;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_Itemable_C* Itemable;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_Uses_C* ItemUses;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_Meta_C* Meta;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_RecipeOrCost_C* RecipeOrCost;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ResourceBox;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* WorkshopPacks;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* WorkshopPacksContainer;  // 0x0338, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItemOrePage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitFieldGuideView(FItemsStaticRowHandle ItemIn, FFieldGuideCategoriesRowHandle CategoryIn, FFieldGuideSubcategoriesRowHandle SubcategoryIn);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void PopulateOreDetail(FItemsStaticRowHandle ItemRow, FFieldGuideCategoriesRowHandle CategoryRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SubItemClicked(FFieldGuideCategoriesRowHandle CategoryRow, FItemsStaticRowHandle ItemRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SubItemClickedByRef(const FFieldGuideCategoriesRowHandle& CategoryRow, const FItemsStaticRowHandle& ItemRow);  // parameters 0x30
};
