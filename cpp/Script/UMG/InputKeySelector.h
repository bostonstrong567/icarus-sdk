// /Script/UMG.InputKeySelector
// Derives from: UWidget > UVisual > UObject
// size 0x700, declared in Engine/Source/Runtime/UMG/Public/Components/InputKeySelector.h

UCLASS()
class UInputKeySelector : public UWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle WidgetStyle;  // 0x0108, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTextBlockStyle TextStyle;  // 0x0380, size 0x270
    UPROPERTY(BlueprintReadOnly) FInputChord SelectedKey;  // 0x05F0, size 0x20
    UPROPERTY(Deprecated) FSlateFontInfo Font;  // 0x0610, size 0x58
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin Margin;  // 0x0668, size 0x10
    UPROPERTY(Deprecated) FLinearColor ColorAndOpacity;  // 0x0678, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FText KeySelectionText;  // 0x0688, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FText NoKeySpecifiedText;  // 0x06A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bAllowModifierKeys;  // 0x06B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bAllowGamepadKeys;  // 0x06B9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FKey> EscapeKeys;  // 0x06C0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnKeySelected OnKeySelected;  // 0x06D0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnIsSelectingKeyChanged OnIsSelectingKeyChanged;  // 0x06E0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SInputKeySelector,0> MyInputKeySelector;  // 0x06F0, private

    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetIsSelectingKey() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAllowGamepadKeys(bool bInAllowGamepadKeys);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAllowModifierKeys(bool bInAllowModifierKeys);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetEscapeKeys(const TArray<FKey>& InKeys);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetKeySelectionText(FText InKeySelectionText);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetNoKeySpecifiedText(FText InNoKeySpecifiedText);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetSelectedKey(const FInputChord& InSelectedKey);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetTextBlockVisibility(ESlateVisibility InVisibility);  // parameters 0x1

    // Virtual functions that start here:
    //   HandleKeySelected
};
