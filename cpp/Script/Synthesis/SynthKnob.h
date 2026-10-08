// /Script/Synthesis.SynthKnob
// Derives from: UWidget > UVisual > UObject
// size 0x400, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Public/UI/SynthKnob.h

UCLASS()
class USynthKnob : public UWidget
{
public:
    UPROPERTY(EditAnywhere) float Value;  // 0x0108, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float StepSize;  // 0x010C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MouseSpeed;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MouseFineTuneSpeed;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 ShowTooltipInfo : 1;  // 0x0118, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FText ParameterName;  // 0x0120, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FText ParameterUnits;  // 0x0138, size 0x18
    UPROPERTY() FGetFloat ValueDelegate;  // 0x0150, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSynthKnobStyle WidgetStyle;  // 0x0160, size 0x238
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool Locked;  // 0x0398, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool IsFocusable;  // 0x0399, size 0x1
    UPROPERTY(BlueprintAssignable) FOnMouseCaptureBeginEvent OnMouseCaptureBegin;  // 0x03A0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMouseCaptureEndEvent OnMouseCaptureEnd;  // 0x03B0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnControllerCaptureBeginEvent OnControllerCaptureBegin;  // 0x03C0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnControllerCaptureEndEvent OnControllerCaptureEnd;  // 0x03D0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnFloatValueChangedEvent OnValueChanged;  // 0x03E0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SSynthKnob,0> MySynthKnob;  // 0x03F0, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetLocked(bool InValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetStepSize(float InValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetValue(float InValue);  // parameters 0x4
};
