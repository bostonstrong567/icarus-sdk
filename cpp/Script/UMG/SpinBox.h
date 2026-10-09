// /Script/UMG.SpinBox
// Derives from: UWidget > UVisual > UObject
// size 0x520, declared in Engine/Source/Runtime/UMG/Public/Components/SpinBox.h

UCLASS()
class USpinBox : public UWidget
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) float Value;  // 0x0108, size 0x4
    UPROPERTY() FGetFloat ValueDelegate;  // 0x010C, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSpinBoxStyle WidgetStyle;  // 0x0120, size 0x2E8
    UPROPERTY(Deprecated) USlateWidgetStyleAsset* Style;  // 0x0408, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinFractionalDigits;  // 0x0410, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxFractionalDigits;  // 0x0414, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAlwaysUsesDeltaSnap;  // 0x0418, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Delta;  // 0x041C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SliderExponent;  // 0x0420, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSlateFontInfo Font;  // 0x0428, size 0x58
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ETextJustify> Justification;  // 0x0480, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinDesiredWidth;  // 0x0484, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool ClearKeyboardFocusOnCommit;  // 0x0488, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool SelectAllTextOnCommit;  // 0x0489, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSlateColor ForegroundColor;  // 0x0490, size 0x28
    UPROPERTY(BlueprintAssignable) FOnSpinBoxValueChangedEvent OnValueChanged;  // 0x04B8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSpinBoxValueCommittedEvent OnValueCommitted;  // 0x04C8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSpinBoxBeginSliderMovement OnBeginSliderMovement;  // 0x04D8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSpinBoxValueChangedEvent OnEndSliderMovement;  // 0x04E8, size 0x10
protected:
    UPROPERTY(EditAnywhere) uint8 bOverride_MinValue : 1;  // 0x04F8, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOverride_MaxValue : 1;  // 0x04F8, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bOverride_MinSliderValue : 1;  // 0x04F8, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bOverride_MaxSliderValue : 1;  // 0x04F8, mask 0x08
    UPROPERTY(EditAnywhere) float MinValue;  // 0x04FC, size 0x4
    UPROPERTY(EditAnywhere) float MaxValue;  // 0x0500, size 0x4
    UPROPERTY(EditAnywhere) float MinSliderValue;  // 0x0504, size 0x4
    UPROPERTY(EditAnywhere) float MaxSliderValue;  // 0x0508, size 0x4
    TSharedPtr<SSpinBox<float>,0> MySpinBox;  // 0x0510, not reflected
public:
    UFUNCTION(BlueprintCallable) void ClearMaxSliderValue();
    UFUNCTION(BlueprintCallable) void ClearMaxValue();
    UFUNCTION(BlueprintCallable) void ClearMinSliderValue();
    UFUNCTION(BlueprintCallable) void ClearMinValue();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetAlwaysUsesDeltaSnap() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetDelta() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMaxFractionalDigits() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxSliderValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMinFractionalDigits() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinSliderValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAlwaysUsesDeltaSnap(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetDelta(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetForegroundColor(FSlateColor InForegroundColor);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void SetMaxFractionalDigits(int32 NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMaxSliderValue(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMaxValue(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMinFractionalDigits(int32 NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMinSliderValue(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMinValue(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetValue(float NewValue);  // parameters 0x4
};
