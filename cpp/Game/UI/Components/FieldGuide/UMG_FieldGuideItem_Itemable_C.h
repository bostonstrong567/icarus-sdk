// /Game/UI/Components/FieldGuide/UMG_FieldGuideItem_Itemable.UMG_FieldGuideItem_Itemable_C
// Derives from: UFieldGuideItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0x368, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItem_Itemable_C : public UFieldGuideItemWidgetBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_1;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_3;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_92;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_124;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* FieldGuideHidden;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_Variations;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideResourceHowToObtain_C* HowToObtain;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_52;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ItemDescription;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ItemFlavour;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemIcon;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ItemName;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StackSizeText;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TalentRequiredIcon_C* UMG_TalentRequiredIcon;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* VariationText;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor WorkshopPurple;  // 0x0350, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UTextBlock* Target;  // 0x0360, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItem_Itemable(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitFieldGuideView(FItemsStaticRowHandle ItemIn, FFieldGuideCategoriesRowHandle CategoryIn, FFieldGuideSubcategoriesRowHandle SubcategoryIn);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void Populate_Itemable_Detail(FItemsStaticRowHandle ItemRow, FFieldGuideCategoriesRowHandle CategoryRow);  // parameters 0x30, named "Populate Itemable Detail"
    UFUNCTION(BlueprintCallable) void UpdateColor();
};
