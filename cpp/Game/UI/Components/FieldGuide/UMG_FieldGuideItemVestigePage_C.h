// /Game/UI/Components/FieldGuide/UMG_FieldGuideItemVestigePage.UMG_FieldGuideItemVestigePage_C
// Derives from: UFieldGuidePageWidgetBase > UFieldGuideItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0x348, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItemVestigePage_C : public UFieldGuidePageWidgetBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* BestiaryGrid;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_Itemable_C* Itemable;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* ProcureGrid;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* SkinnedBy;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_Uses_C* Uses;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_NA_Bestiary;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_NA_Procure;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_NA_SkinnedBy;  // 0x0340, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DoBestiaryClickByRef(FBestiaryDataRowHandle Creature, int32 Percent);  // parameters 0x1C
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItemVestigePage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitFieldGuideView(FItemsStaticRowHandle ItemIn, FFieldGuideCategoriesRowHandle CategoryIn, FFieldGuideSubcategoriesRowHandle SubcategoryIn);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void PopulateResourceDetail(FItemsStaticRowHandle ItemRow, FFieldGuideCategoriesRowHandle CategoryRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SubItemClicked(FFieldGuideCategoriesRowHandle CategoryRow, FItemsStaticRowHandle ItemRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SubItemClickedByRef(const FFieldGuideCategoriesRowHandle& CategoryRow, const FItemsStaticRowHandle& ItemRow);  // parameters 0x30
};
