// /Script/UMG.CheckBox
// Derives from: UContentWidget > UPanelWidget > UWidget > UVisual > UObject
// size 0x770, declared in Engine/Source/Runtime/UMG/Public/Components/CheckBox.h

UCLASS()
class UCheckBox : public UContentWidget
{
public:
    UPROPERTY(EditAnywhere) ECheckBoxState CheckedState;  // 0x0120, size 0x1
    UPROPERTY() FGetCheckBoxState CheckedStateDelegate;  // 0x0124, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCheckBoxStyle WidgetStyle;  // 0x0138, size 0x580
    UPROPERTY(Deprecated) USlateWidgetStyleAsset* Style;  // 0x06B8, size 0x8
    UPROPERTY(Deprecated) USlateBrushAsset* UncheckedImage;  // 0x06C0, size 0x8
    UPROPERTY(Deprecated) USlateBrushAsset* UncheckedHoveredImage;  // 0x06C8, size 0x8
    UPROPERTY(Deprecated) USlateBrushAsset* UncheckedPressedImage;  // 0x06D0, size 0x8
    UPROPERTY(Deprecated) USlateBrushAsset* CheckedImage;  // 0x06D8, size 0x8
    UPROPERTY(Deprecated) USlateBrushAsset* CheckedHoveredImage;  // 0x06E0, size 0x8
    UPROPERTY(Deprecated) USlateBrushAsset* CheckedPressedImage;  // 0x06E8, size 0x8
    UPROPERTY(Deprecated) USlateBrushAsset* UndeterminedImage;  // 0x06F0, size 0x8
    UPROPERTY(Deprecated) USlateBrushAsset* UndeterminedHoveredImage;  // 0x06F8, size 0x8
    UPROPERTY(Deprecated) USlateBrushAsset* UndeterminedPressedImage;  // 0x0700, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;  // 0x0708, size 0x1
    UPROPERTY(Deprecated) FMargin Padding;  // 0x070C, size 0x10
    UPROPERTY(Deprecated) FSlateColor BorderBackgroundColor;  // 0x0720, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EButtonClickMethod> ClickMethod;  // 0x0748, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EButtonTouchMethod> TouchMethod;  // 0x0749, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EButtonPressMethod> PressMethod;  // 0x074A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool IsFocusable;  // 0x074B, size 0x1
    UPROPERTY(BlueprintAssignable) FOnCheckBoxComponentStateChanged OnCheckStateChanged;  // 0x0750, size 0x10
protected:
    TSharedPtr<SCheckBox,0> MyCheckbox;  // 0x0760, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) ECheckBoxState GetCheckedState() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsChecked() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPressed() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCheckedState(ECheckBoxState InCheckedState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetIsChecked(bool InIsChecked);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);  // parameters 0x1
};
