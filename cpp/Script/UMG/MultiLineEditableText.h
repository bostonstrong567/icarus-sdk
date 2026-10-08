// /Script/UMG.MultiLineEditableText
// Derives from: UTextLayoutWidget > UWidget > UVisual > UObject
// size 0x470, declared in Engine/Source/Runtime/UMG/Public/Components/MultiLineEditableText.h

UCLASS()
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
    UPROPERTY(EditAnywhere) FText Text;  // 0x0128, size 0x18
    UPROPERTY(EditAnywhere) FText HintText;  // 0x0140, size 0x18
    UPROPERTY() FGetText HintTextDelegate;  // 0x0158, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTextBlockStyle WidgetStyle;  // 0x0168, size 0x270
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsReadOnly;  // 0x03D8, size 0x1
    UPROPERTY(Deprecated) FSlateFontInfo Font;  // 0x03E0, size 0x58
    UPROPERTY(EditAnywhere) bool SelectAllTextWhenFocused;  // 0x0438, size 0x1
    UPROPERTY(EditAnywhere) bool ClearTextSelectionOnFocusLoss;  // 0x0439, size 0x1
    UPROPERTY(EditAnywhere) bool RevertTextOnEscape;  // 0x043A, size 0x1
    UPROPERTY(EditAnywhere) bool ClearKeyboardFocusOnCommit;  // 0x043B, size 0x1
    UPROPERTY(EditAnywhere) bool AllowContextMenu;  // 0x043C, size 0x1
    UPROPERTY(EditAnywhere) FVirtualKeyboardOptions VirtualKeyboardOptions;  // 0x043D, size 0x1
    UPROPERTY(EditAnywhere) EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;  // 0x043E, size 0x1
    UPROPERTY(BlueprintAssignable) FOnMultiLineEditableTextChangedEvent OnTextChanged;  // 0x0440, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMultiLineEditableTextCommittedEvent OnTextCommitted;  // 0x0450, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SMultiLineEditableText,0> MyMultiLineEditableText;  // 0x0460, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetHintText() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetText() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetHintText(FText InHintText);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetIsReadOnly(bool bReadOnly);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetText(FText InText);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetWidgetStyle(const FTextBlockStyle& InWidgetStyle);  // parameters 0x270
};
