// /Game/UI/Components/FieldGuide/UMG_FieldGuideResourceItemsGrid.UMG_FieldGuideResourceItemsGrid_C
// Derives from: UFieldGuidePageWidgetBase > UFieldGuideItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0x351, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideResourceItemsGrid_C : public UFieldGuidePageWidgetBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CategoryLabel;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuide_DLCCheckbox_C* DangerousHorizonsDLC;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* DLCFilterHorizontalBox;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuide_DLCCheckbox_C* GreatHuntsDLC;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* Grid;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuide_DLCCheckbox_C* HomesteadDLC;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuide_DLCCheckbox_C* NewFrontiersDLC;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFeatureLevelsRowHandle> FeatureLevelFilter;  // 0x0328, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFeatureLevelsRowHandle FeatureLevel;  // 0x0338, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Checked;  // 0x0350, size 0x1, named "Is Checked"

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DLCBoxClicked(bool Active, FFeatureLevelsRowHandle FeatureLevel);  // parameters 0x1C
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideResourceItemsGrid(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitFieldGuideView(FItemsStaticRowHandle ItemIn, FFieldGuideCategoriesRowHandle CategoryIn, FFieldGuideSubcategoriesRowHandle SubcategoryIn);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void Populate_Resource_Detail(FFieldGuideCategoriesRowHandle CategoryRow, FFieldGuideSubcategoriesRowHandle SubcategoryRow);  // parameters 0x30, named "Populate Resource Detail"
    UFUNCTION(BlueprintCallable) void SubItemClicked(FFieldGuideCategoriesRowHandle CategoryRow, FItemsStaticRowHandle ItemRow);  // parameters 0x30
};
