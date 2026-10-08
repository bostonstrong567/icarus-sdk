// /Game/ASS/CHA/PHX/Customization/WB_ChaCustom_UI.WB_ChaCustom_UI_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x444, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UWB_ChaCustom_UI_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_Beard01;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_Beard02;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_Beard03;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_ComplexionType_Left;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_ComplexionType_Right;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCheckBox* B_Exaggerate;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_Eyebrow01;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_Eyebrow02;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCheckBox* B_Gender_Female;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCheckBox* B_Gender_Male;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_Hair01;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_Hair02;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_Hair03;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_Piercing01;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_Piercing02;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_Piercing03;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_Preset01;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_Preset02;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_Preset03;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_Preset04;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_Preset05;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCheckBox* Checkbox_Bottom;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCheckBox* Checkbox_Helmet;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCheckBox* Checkbox_Hood;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCheckBox* Checkbox_Left;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCheckBox* Checkbox_Rebreather;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCheckBox* Checkbox_Right;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCheckBox* Checkbox_Top;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UComboBoxText* Dropdown_Age;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UComboBoxText* Dropdown_Bottom;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UComboBoxText* Dropdown_Left;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UComboBoxText* Dropdown_Right;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UComboBoxText* Dropdown_Top;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* S_Scar;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* S_SkinHemoglobin;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* S_SkinTone;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* S_SkinToneBlend;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* SB_EyeColors;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* SB_HairColors;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* T_ComplexionType;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWB_ChaCustom_Shape_C* WB_CharCustom_Shape;  // 0x03A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* ActorReference;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SkinTone;  // 0x03B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Option_Bottom;  // 0x03C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Option_Left;  // 0x03D8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Option_Right;  // 0x03F0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Option_Top;  // 0x0408, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSwappingOption;  // 0x0420, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SkinHemoglobin;  // 0x0424, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SkinToneBlend;  // 0x0428, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> Complexion_Type;  // 0x0430, size 0x10, named "Complexion Type"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ComplexionCurrentCount;  // 0x0440, size 0x4

    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Beard01_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Beard02_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Beard02_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_ComplexionType_Left_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_ComplexionType_Right_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Exaggerate_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);  // parameters 0x1
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Eyebrow01_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Eyebrow02_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Gender_Female_K2Node_ComponentBoundEvent_28_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);  // parameters 0x1
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Gender_Male_K2Node_ComponentBoundEvent_29_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);  // parameters 0x1
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Hair01_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Hair02_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Hair03_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Piercing01_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Piercing02_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Piercing03_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Preset03_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Preset04_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Preset05_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Preset1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_B_Preset2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_Checkbox_Bottom_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);  // parameters 0x1
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_Checkbox_Helmet_K2Node_ComponentBoundEvent_34_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);  // parameters 0x1
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_Checkbox_Hood_K2Node_ComponentBoundEvent_35_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);  // parameters 0x1
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_Checkbox_Left_K2Node_ComponentBoundEvent_12_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);  // parameters 0x1
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_Checkbox_Rebreather_K2Node_ComponentBoundEvent_36_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);  // parameters 0x1
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_Checkbox_Right_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);  // parameters 0x1
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_Checkbox_Top_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);  // parameters 0x1
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_Dropdown_Age_K2Node_ComponentBoundEvent_23_OnSelectionChangedEvent__DelegateSignature(FText SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);  // parameters 0x19
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_Dropdown_Bottom_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature(FText SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);  // parameters 0x19
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_Dropdown_Left_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature(FText SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);  // parameters 0x19
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_Dropdown_Right_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature(FText SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);  // parameters 0x19
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_Dropdown_Top_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature(FText SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);  // parameters 0x19
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_S_Scar_K2Node_ComponentBoundEvent_10_OnFloatValueChangedEvent__DelegateSignature(float Value);  // parameters 0x4
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_S_SkinHemoglobin_K2Node_ComponentBoundEvent_30_OnFloatValueChangedEvent__DelegateSignature(float Value);  // parameters 0x4
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_S_SkinToneBlend_K2Node_ComponentBoundEvent_32_OnFloatValueChangedEvent__DelegateSignature(float Value);  // parameters 0x4
    UFUNCTION() void BndEvt__WB_ChaCustom_UI_S_SkinTone_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void CheckboxesUpdate(bool Top, bool Bottom, bool Left, bool Right, bool& AllowDisable);  // parameters 0x5
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_WB_ChaCustom_UI(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitializeDefaults();
    UFUNCTION(BlueprintCallable) void PopulateListSetup();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateEyeColorID(int32 ColorID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateHairColorID(int32 ColorID);  // parameters 0x4
};
