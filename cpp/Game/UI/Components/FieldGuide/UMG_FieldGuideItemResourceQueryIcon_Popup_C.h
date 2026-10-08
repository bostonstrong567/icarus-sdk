// /Game/UI/Components/FieldGuide/UMG_FieldGuideItemResourceQueryIcon_Popup.UMG_FieldGuideItemResourceQueryIcon_Popup_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItemResourceQueryIcon_Popup_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DescriptionText;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* Spacer_FeatureLevelMargin;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TagDesc;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* UMG_IcarusGrid;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCraftingTagsRowHandle CraftingTagRow;  // 0x0298, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItemResourceQueryIcon_Popup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialize();
};
