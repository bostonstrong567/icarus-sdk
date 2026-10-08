// /Game/UI/Spectator/W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C
// Derives from: UW_PostProcessEntry_C > UUserWidget > UWidget > UVisual > UObject
// size 0x31C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_PostProcessEntry_Slider_C : public UW_PostProcessEntry_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCheckBox* CheckBox_200;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* Slider;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpinBox* SpinBox_Value;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_UnitTitle;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Title;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Value;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Name;  // 0x02D0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FontSize;  // 0x02E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TextFill;  // 0x02EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultSliderValue;  // 0x02F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasEnableBox;  // 0x02F4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D MinMaxSliderValues;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpinBoxFractionalDigits;  // 0x0300, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UnitTitle;  // 0x0308, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SliderDelta;  // 0x0318, size 0x4

    UFUNCTION() void BndEvt__CheckBox_200_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);  // parameters 0x1
    UFUNCTION() void BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);  // parameters 0x4
    UFUNCTION() void BndEvt__W_PostProcessEntry_Slider_SpinBox_Value_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void CalculateExponentialDelta(float InDelta, float& OutDelta);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_W_PostProcessEntry_Slider(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetSaveGameValue(FPostProcessSaveData& Value);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetSliderText();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetSliderValue();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitFromDefaultValue();
    UFUNCTION(BlueprintCallable) void InitFromSaveGameValue(FPostProcessSaveData Value);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsEntryEnabled();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateSliderEnabled();
};
