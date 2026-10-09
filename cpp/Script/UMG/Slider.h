// /Script/UMG.Slider
// Derives from: UWidget > UVisual > UObject
// size 0x4F8, declared in Engine/Source/Runtime/UMG/Public/Components/Slider.h

UCLASS()
class USlider : public UWidget
{
public:
    UPROPERTY(EditAnywhere) float Value;  // 0x0108, size 0x4
    UPROPERTY() FGetFloat ValueDelegate;  // 0x010C, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinValue;  // 0x011C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxValue;  // 0x0120, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSliderStyle WidgetStyle;  // 0x0128, size 0x340
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EOrientation> Orientation;  // 0x0468, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor SliderBarColor;  // 0x046C, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor SliderHandleColor;  // 0x047C, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool IndentHandle;  // 0x048C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool Locked;  // 0x048D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool MouseUsesStep;  // 0x048E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool RequiresControllerLock;  // 0x048F, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float StepSize;  // 0x0490, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool IsFocusable;  // 0x0494, size 0x1
    UPROPERTY(BlueprintAssignable) FOnMouseCaptureBeginEvent OnMouseCaptureBegin;  // 0x0498, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMouseCaptureEndEvent OnMouseCaptureEnd;  // 0x04A8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnControllerCaptureBeginEvent OnControllerCaptureBegin;  // 0x04B8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnControllerCaptureEndEvent OnControllerCaptureEnd;  // 0x04C8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnFloatValueChangedEvent OnValueChanged;  // 0x04D8, size 0x10
protected:
    TSharedPtr<SSlider,0> MySlider;  // 0x04E8, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetNormalizedValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetIndentHandle(bool InValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLocked(bool InValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetMaxValue(float InValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMinValue(float InValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSliderBarColor(FLinearColor InValue);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetSliderHandleColor(FLinearColor InValue);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetStepSize(float InValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetValue(float InValue);  // parameters 0x4
};
