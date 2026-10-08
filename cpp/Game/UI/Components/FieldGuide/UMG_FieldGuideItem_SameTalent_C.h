// /Game/UI/Components/FieldGuide/UMG_FieldGuideItem_SameTalent.UMG_FieldGuideItem_SameTalent_C
// Derives from: UFieldGuideItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2E8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItem_SameTalent_C : public UFieldGuideItemWidgetBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* SetContainer;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* SetGrid;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_NA;  // 0x02E0, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItem_SameTalent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitFieldGuideView(FItemsStaticRowHandle ItemIn, FFieldGuideCategoriesRowHandle CategoryIn, FFieldGuideSubcategoriesRowHandle SubcategoryIn);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void PopulateItemSet();
    UFUNCTION(BlueprintCallable) void SubItemClicked(FFieldGuideCategoriesRowHandle Category, FItemsStaticRowHandle Item);  // parameters 0x30
};
