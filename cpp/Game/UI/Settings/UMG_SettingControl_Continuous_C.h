// /Game/UI/Settings/UMG_SettingControl_Continuous.UMG_SettingControl_Continuous_C
// Derives from: USettingWidget_ContinuousRange > USettingWidget > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x3C5, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettingControl_Continuous_C : public USettingWidget_ContinuousRange
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SettingText;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderControl;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* SliderProgress;  // 0x03A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinValue;  // 0x03B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxValue;  // 0x03B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DecimalPlaces;  // 0x03B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StepSize;  // 0x03BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentValue;  // 0x03C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Apply_During_Drag;  // 0x03C4, size 0x1, named "Apply During Drag"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Apply();
    UFUNCTION() void BndEvt__SliderControl_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);  // parameters 0x4
    UFUNCTION() void BndEvt__SliderControl_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_SettingControl_Continuous(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintImplementableEvent) void SetApplyDuringDrag(bool bApplyDuringDrag);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void SetRange(float MinVal, float MaxVal);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void SetStepSize(float StepSize);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetValue(float Value, bool bForceRefresh);  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Setup();
    UFUNCTION(BlueprintCallable) void UpdateRangeText(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateRangeValue(bool ForceRefresh);  // parameters 0x1
};
