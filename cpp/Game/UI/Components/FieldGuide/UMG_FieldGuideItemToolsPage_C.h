// /Game/UI/Components/FieldGuide/UMG_FieldGuideItemToolsPage.UMG_FieldGuideItemToolsPage_C
// Derives from: UFieldGuidePageWidgetBase > UFieldGuideItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0x318, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItemToolsPage_C : public UFieldGuidePageWidgetBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_Attachments_C* Attachments;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_Itemable_C* Itemable;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_RecipeOrCost_C* RecipeOrCost;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItems_Sets_C* Sets;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_Stats_C* Stats;  // 0x0310, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItemToolsPage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitFieldGuideView(FItemsStaticRowHandle ItemIn, FFieldGuideCategoriesRowHandle CategoryIn, FFieldGuideSubcategoriesRowHandle SubcategoryIn);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void PopulateArmorDetail(FItemsStaticRowHandle ItemRow, FFieldGuideCategoriesRowHandle CategoryRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SubItemClicked(FFieldGuideCategoriesRowHandle CategoryRow, FItemsStaticRowHandle ItemRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SubItemClickedByRef(const FFieldGuideCategoriesRowHandle& CategoryRow, const FItemsStaticRowHandle& ItemRow);  // parameters 0x30
};
