// /Script/UMG.EditableText
// Derives from: UWidget > UVisual > UObject
// size 0x460, declared in Engine/Source/Runtime/UMG/Public/Components/EditableText.h

UCLASS()
class UEditableText : public UWidget
{
public:
    UPROPERTY(EditAnywhere) FText Text;  // 0x0108, size 0x18
    UPROPERTY() FGetText TextDelegate;  // 0x0120, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FText HintText;  // 0x0130, size 0x18
    UPROPERTY() FGetText HintTextDelegate;  // 0x0148, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEditableTextStyle WidgetStyle;  // 0x0158, size 0x220
    UPROPERTY(Deprecated) USlateWidgetStyleAsset* Style;  // 0x0378, size 0x8
    UPROPERTY(Deprecated) USlateBrushAsset* BackgroundImageSelected;  // 0x0380, size 0x8
    UPROPERTY(Deprecated) USlateBrushAsset* BackgroundImageComposing;  // 0x0388, size 0x8
    UPROPERTY(Deprecated) USlateBrushAsset* CaretImage;  // 0x0390, size 0x8
    UPROPERTY(Deprecated) FSlateFontInfo Font;  // 0x0398, size 0x58
    UPROPERTY(Deprecated) FSlateColor ColorAndOpacity;  // 0x03F0, size 0x28
    UPROPERTY(EditAnywhere) bool IsReadOnly;  // 0x0418, size 0x1
    UPROPERTY(EditAnywhere) bool IsPassword;  // 0x0419, size 0x1
    UPROPERTY(EditAnywhere) float MinimumDesiredWidth;  // 0x041C, size 0x4
    UPROPERTY(EditAnywhere) bool IsCaretMovedWhenGainFocus;  // 0x0420, size 0x1
    UPROPERTY(EditAnywhere) bool SelectAllTextWhenFocused;  // 0x0421, size 0x1
    UPROPERTY(EditAnywhere) bool RevertTextOnEscape;  // 0x0422, size 0x1
    UPROPERTY(EditAnywhere) bool ClearKeyboardFocusOnCommit;  // 0x0423, size 0x1
    UPROPERTY(EditAnywhere) bool SelectAllTextOnCommit;  // 0x0424, size 0x1
    UPROPERTY(EditAnywhere) bool AllowContextMenu;  // 0x0425, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EVirtualKeyboardType> KeyboardType;  // 0x0426, size 0x1
    UPROPERTY(EditAnywhere) FVirtualKeyboardOptions VirtualKeyboardOptions;  // 0x0427, size 0x1
    UPROPERTY(EditAnywhere) EVirtualKeyboardTrigger VirtualKeyboardTrigger;  // 0x0428, size 0x1
    UPROPERTY(EditAnywhere) EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;  // 0x0429, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ETextJustify> Justification;  // 0x042A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FShapedTextOptions ShapedTextOptions;  // 0x042B, size 0x3
    UPROPERTY(BlueprintAssignable) FOnEditableTextChangedEvent OnTextChanged;  // 0x0430, size 0x10
    UPROPERTY(BlueprintAssignable) FOnEditableTextCommittedEvent OnTextCommitted;  // 0x0440, size 0x10
protected:
    TSharedPtr<SEditableText,0> MyEditableText;  // 0x0450, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetText() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetHintText(FText InHintText);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetIsPassword(bool InbIsPassword);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetIsReadOnly(bool InbIsReadyOnly);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetJustification(TEnumAsByte<ETextJustify> InJustification);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetText(FText InText);  // parameters 0x18
};
