// /Game/UI/Components/FieldGuide/UMG_FieldGuide_DLCCheckbox.UMG_FieldGuide_DLCCheckbox_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuide_DLCCheckbox_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* CheckButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* CheckHorizontalBox;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCheckBox* FeatureLevelCheckbox;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FeatureLevelText;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFeatureLevelsRowHandle FeatureLevel;  // 0x0288, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FCheckboxClicked CheckboxClicked;  // 0x02A0, size 0x10

    UFUNCTION() void BndEvt__UMG_FieldGuide_DLCCheckbox_Button_63_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_FieldGuide_DLCCheckbox_CheckButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_FieldGuide_DLCCheckbox_CheckButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_FieldGuide_DLCCheckbox_FeatureLevelCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckboxClicked__DelegateSignature(bool Active, FFeatureLevelsRowHandle FeatureLevel);  // parameters 0x1C
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuide_DLCCheckbox(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
