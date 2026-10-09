// /Script/UMG.EditableTextBox
// Derives from: UWidget > UVisual > UObject
// size 0xA38, declared in Engine/Source/Runtime/UMG/Public/Components/EditableTextBox.h

UCLASS()
class UEditableTextBox : public UWidget
{
public:
    UPROPERTY(EditAnywhere) FText Text;  // 0x0108, size 0x18
    UPROPERTY() FGetText TextDelegate;  // 0x0120, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEditableTextBoxStyle WidgetStyle;  // 0x0130, size 0x7F8
    UPROPERTY(Deprecated) USlateWidgetStyleAsset* Style;  // 0x0928, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FText HintText;  // 0x0930, size 0x18
    UPROPERTY() FGetText HintTextDelegate;  // 0x0948, size 0x10
    UPROPERTY(Deprecated) FSlateFontInfo Font;  // 0x0958, size 0x58
    UPROPERTY(Deprecated) FLinearColor ForegroundColor;  // 0x09B0, size 0x10
    UPROPERTY(Deprecated) FLinearColor BackgroundColor;  // 0x09C0, size 0x10
    UPROPERTY(Deprecated) FLinearColor ReadOnlyForegroundColor;  // 0x09D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool IsReadOnly;  // 0x09E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool IsPassword;  // 0x09E1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinimumDesiredWidth;  // 0x09E4, size 0x4
    UPROPERTY(Deprecated) FMargin Padding;  // 0x09E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool IsCaretMovedWhenGainFocus;  // 0x09F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool SelectAllTextWhenFocused;  // 0x09F9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool RevertTextOnEscape;  // 0x09FA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool ClearKeyboardFocusOnCommit;  // 0x09FB, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool SelectAllTextOnCommit;  // 0x09FC, size 0x1
    UPROPERTY(EditAnywhere) bool AllowContextMenu;  // 0x09FD, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EVirtualKeyboardType> KeyboardType;  // 0x09FE, size 0x1
    UPROPERTY(EditAnywhere) FVirtualKeyboardOptions VirtualKeyboardOptions;  // 0x09FF, size 0x1
    UPROPERTY(EditAnywhere) EVirtualKeyboardTrigger VirtualKeyboardTrigger;  // 0x0A00, size 0x1
    UPROPERTY(EditAnywhere) EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;  // 0x0A01, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ETextJustify> Justification;  // 0x0A02, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FShapedTextOptions ShapedTextOptions;  // 0x0A03, size 0x3
    UPROPERTY(BlueprintAssignable) FOnEditableTextBoxChangedEvent OnTextChanged;  // 0x0A08, size 0x10
    UPROPERTY(BlueprintAssignable) FOnEditableTextBoxCommittedEvent OnTextCommitted;  // 0x0A18, size 0x10
protected:
    TSharedPtr<SEditableTextBox,0> MyEditableTextBlock;  // 0x0A28, not reflected
public:
    UFUNCTION(BlueprintCallable) void ClearError();
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetText() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasError() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetError(FText InError);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetHintText(FText InText);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetIsPassword(bool bIsPassword);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetIsReadOnly(bool bReadOnly);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetJustification(TEnumAsByte<ETextJustify> InJustification);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetText(FText InText);  // parameters 0x18

    // Virtual functions that start here:
    //   HandleOnTextChanged, HandleOnTextCommitted
};
