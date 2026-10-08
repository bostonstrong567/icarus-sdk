// /Game/UI/Components/FieldGuide/UMG_FieldGuideItem_LegendaryBaseStats.UMG_FieldGuideItem_LegendaryBaseStats_C
// Derives from: UFieldGuideItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0x318, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItem_LegendaryBaseStats_C : public UFieldGuideItemWidgetBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* AlterationList;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* CreatesGrid;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_95;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ModifierList;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* SetBonusList;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* SetBonusSpacer;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* StatList;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItems_ToolDamage_C* ToolDamage;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_NA;  // 0x0310, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItem_LegendaryBaseStats(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitFieldGuideView(FItemsStaticRowHandle ItemIn, FFieldGuideCategoriesRowHandle CategoryIn, FFieldGuideSubcategoriesRowHandle SubcategoryIn);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void PopulateStatsView();
    UFUNCTION(BlueprintCallable) void SubItemClicked(FFieldGuideCategoriesRowHandle Category, FItemsStaticRowHandle Item);  // parameters 0x30
};
