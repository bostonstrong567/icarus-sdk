// /Game/UI/Components/FieldGuide/UMG_FieldGuideItem_Workshop.UMG_FieldGuideItem_Workshop_C
// Derives from: UFieldGuideItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2E0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItem_Workshop_C : public UFieldGuideItemWidgetBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* ReplicationCost;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* ResearchCost;  // 0x02D8, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItem_Workshop(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitFieldGuideView(FItemsStaticRowHandle ItemIn, FFieldGuideCategoriesRowHandle CategoryIn, FFieldGuideSubcategoriesRowHandle SubcategoryIn);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void Populate_Workshop_Detail(FItemsStaticRowHandle ItemRow, FFieldGuideCategoriesRowHandle CategoryRow);  // parameters 0x30, named "Populate Workshop Detail"
};
