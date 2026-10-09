// /Script/UMG.Button
// Derives from: UContentWidget > UPanelWidget > UWidget > UVisual > UObject
// size 0x428, declared in Engine/Source/Runtime/UMG/Public/Components/Button.h

UCLASS()
class UButton : public UContentWidget
{
public:
    UPROPERTY(Deprecated) USlateWidgetStyleAsset* Style;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle WidgetStyle;  // 0x0128, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor ColorAndOpacity;  // 0x03A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor BackgroundColor;  // 0x03B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EButtonClickMethod> ClickMethod;  // 0x03C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EButtonTouchMethod> TouchMethod;  // 0x03C1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EButtonPressMethod> PressMethod;  // 0x03C2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool IsFocusable;  // 0x03C3, size 0x1
    UPROPERTY(BlueprintAssignable) FOnButtonClickedEvent OnClicked;  // 0x03C8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnButtonPressedEvent OnPressed;  // 0x03D8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnButtonReleasedEvent OnReleased;  // 0x03E8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnButtonHoverEvent OnHovered;  // 0x03F8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnButtonHoverEvent OnUnhovered;  // 0x0408, size 0x10
protected:
    TSharedPtr<SButton,0> MyButton;  // 0x0418, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPressed() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetBackgroundColor(FLinearColor InBackgroundColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetColorAndOpacity(FLinearColor InColorAndOpacity);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetStyle(const FButtonStyle& InStyle);  // parameters 0x278
    UFUNCTION(BlueprintCallable) void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);  // parameters 0x1
};
