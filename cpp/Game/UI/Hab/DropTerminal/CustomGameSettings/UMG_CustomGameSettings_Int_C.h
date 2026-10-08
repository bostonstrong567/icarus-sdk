// /Game/UI/Hab/DropTerminal/CustomGameSettings/UMG_CustomGameSettings_Int.UMG_CustomGameSettings_Int_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x340, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CustomGameSettings_Int_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_83;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DarkTint;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* OuterBox;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SettingName;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpinBox* SpinBox_Value;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Value;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* ValueSlider;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RowName;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCustomGameStat SettingData;  // 0x02A8, size 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanEdit;  // 0x0328, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InitialValue;  // 0x032C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnSettingValueChanged OnSettingValueChanged;  // 0x0330, size 0x10

    UFUNCTION() void BndEvt__UMG_CustomGameSettings_Int_SpinBox_Value_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);  // parameters 0x4
    UFUNCTION() void BndEvt__UMG_CustomGameSettings_Int_ValueSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_CustomGameSettings_Int(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSettingValueChanged__DelegateSignature(FName RowName, int32 NewValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnValueChanged(int32 Value);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAlternate(bool Alternate);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateDefaultStateTextHighlighting(int32 CurrentValue);  // parameters 0x4
};
