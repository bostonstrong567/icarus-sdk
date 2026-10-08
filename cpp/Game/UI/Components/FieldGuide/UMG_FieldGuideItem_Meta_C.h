// /Game/UI/Components/FieldGuide/UMG_FieldGuideItem_Meta.UMG_FieldGuideItem_Meta_C
// Derives from: UFieldGuideItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0x340, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItem_Meta_C : public UFieldGuideItemWidgetBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description1;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description2;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description3;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_58;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image1;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Image1Container;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image2;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Image2Container;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image3;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Image3Container;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* MetaGrid;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MetaOuterBox;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MetaTitle;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* SwitcherNA;  // 0x0338, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItem_Meta(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitFieldGuideView(FItemsStaticRowHandle ItemIn, FFieldGuideCategoriesRowHandle CategoryIn, FFieldGuideSubcategoriesRowHandle SubcategoryIn);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void PopulateMetaDetail();
    UFUNCTION(BlueprintCallable) void SetHeaderText(FText TextIn);  // parameters 0x18
};
