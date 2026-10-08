// /Script/UMG.MultiLineEditableTextBox
// Derives from: UTextLayoutWidget > UWidget > UVisual > UObject
// size 0xC98, declared in Engine/Source/Runtime/UMG/Public/Components/MultiLineEditableTextBox.h

UCLASS()
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
    UPROPERTY(EditAnywhere) FText Text;  // 0x0128, size 0x18
    UPROPERTY(EditAnywhere) FText HintText;  // 0x0140, size 0x18
    UPROPERTY() FGetText HintTextDelegate;  // 0x0158, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEditableTextBoxStyle WidgetStyle;  // 0x0168, size 0x7F8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTextBlockStyle TextStyle;  // 0x0960, size 0x270
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsReadOnly;  // 0x0BD0, size 0x1
    UPROPERTY(EditAnywhere) bool AllowContextMenu;  // 0x0BD1, size 0x1
    UPROPERTY(EditAnywhere) FVirtualKeyboardOptions VirtualKeyboardOptions;  // 0x0BD2, size 0x1
    UPROPERTY(EditAnywhere) EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;  // 0x0BD3, size 0x1
    UPROPERTY(Deprecated) USlateWidgetStyleAsset* Style;  // 0x0BD8, size 0x8
    UPROPERTY(Deprecated) FSlateFontInfo Font;  // 0x0BE0, size 0x58
    UPROPERTY(Deprecated) FLinearColor ForegroundColor;  // 0x0C38, size 0x10
    UPROPERTY(Deprecated) FLinearColor BackgroundColor;  // 0x0C48, size 0x10
    UPROPERTY(Deprecated) FLinearColor ReadOnlyForegroundColor;  // 0x0C58, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMultiLineEditableTextBoxChangedEvent OnTextChanged;  // 0x0C68, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMultiLineEditableTextBoxCommittedEvent OnTextCommitted;  // 0x0C78, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SMultiLineEditableTextBox,0> MyEditableTextBlock;  // 0x0C88, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetHintText() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetText() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetError(FText InError);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetHintText(FText InHintText);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetIsReadOnly(bool bReadOnly);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetText(FText InText);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetTextStyle(const FTextBlockStyle& InTextStyle);  // parameters 0x270
};
