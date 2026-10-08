// /Script/Synthesis.Synth2DSlider
// Derives from: UWidget > UVisual > UObject
// size 0x478, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Public/UI/Synth2DSlider.h

UCLASS()
class USynth2DSlider : public UWidget
{
public:
    UPROPERTY(EditAnywhere) float ValueX;  // 0x0108, size 0x4
    UPROPERTY(EditAnywhere) float ValueY;  // 0x010C, size 0x4
    UPROPERTY() FGetFloat ValueXDelegate;  // 0x0110, size 0x10
    UPROPERTY() FGetFloat ValueYDelegate;  // 0x0120, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSynth2DSliderStyle WidgetStyle;  // 0x0130, size 0x2B8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor SliderHandleColor;  // 0x03E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool IndentHandle;  // 0x03F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool Locked;  // 0x03F9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float StepSize;  // 0x03FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool IsFocusable;  // 0x0400, size 0x1
    UPROPERTY(BlueprintAssignable) FOnMouseCaptureBeginEventSynth2D OnMouseCaptureBegin;  // 0x0408, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMouseCaptureEndEventSynth2D OnMouseCaptureEnd;  // 0x0418, size 0x10
    UPROPERTY(BlueprintAssignable) FOnControllerCaptureBeginEventSynth2D OnControllerCaptureBegin;  // 0x0428, size 0x10
    UPROPERTY(BlueprintAssignable) FOnControllerCaptureEndEventSynth2D OnControllerCaptureEnd;  // 0x0438, size 0x10
    UPROPERTY(BlueprintAssignable) FOnFloatValueChangedEventSynth2D OnValueChangedX;  // 0x0448, size 0x10
    UPROPERTY(BlueprintAssignable) FOnFloatValueChangedEventSynth2D OnValueChangedY;  // 0x0458, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SSynth2DSlider,0> MySlider;  // 0x0468, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D GetValue() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetIndentHandle(bool InValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLocked(bool InValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSliderHandleColor(FLinearColor InValue);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetStepSize(float InValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetValue(FVector2D InValue);  // parameters 0x8
};
