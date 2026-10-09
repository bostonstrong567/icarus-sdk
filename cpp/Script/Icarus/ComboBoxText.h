// /Script/Icarus.ComboBoxText
// Derives from: UWidget > UVisual > UObject
// size 0xE08, declared in Icarus/Source/Icarus/UI/ComboBoxText.h

UCLASS()
class UComboBoxText : public UWidget
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FComboBoxStyle WidgetStyle;  // 0x0130, size 0x3F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTableRowStyle ItemStyle;  // 0x0520, size 0x7C8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin ContentPadding;  // 0x0CE8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxListHeight;  // 0x0CF8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool HasDownArrow;  // 0x0CFC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool EnableGamepadNavigationMode;  // 0x0CFD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSlateFontInfo Font;  // 0x0D00, size 0x58
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSlateColor ForegroundColor;  // 0x0D58, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsFocusable;  // 0x0D80, size 0x1
    UPROPERTY(EditAnywhere) FGenerateWidgetForText OnGenerateWidgetEvent;  // 0x0D84, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSelectionChangedEvent OnSelectionChanged;  // 0x0D98, size 0x10
    UPROPERTY(BlueprintAssignable) FOnOpeningEvent OnOpening;  // 0x0DA8, size 0x10
protected:
    TArray<TSharedPtr<FText,0>,TSizedDefaultAllocator<32> > Options;  // 0x0DB8, not reflected
    TSharedPtr<SComboBox<TSharedPtr<FText,0> >,0> MyComboBox;  // 0x0DC8, not reflected
    TSharedPtr<SBox,0> ComboBoxContent;  // 0x0DD8, not reflected
    TWeakPtr<STextBlock,0> DefaultComboBoxContent;  // 0x0DE8, not reflected
    TSharedPtr<FText,0> CurrentOptionPtr;  // 0x0DF8, not reflected
private:
    UPROPERTY(EditAnywhere) TArray<FText> DefaultOptions;  // 0x0108, size 0x10
    UPROPERTY(EditAnywhere) FText SelectedOption;  // 0x0118, size 0x18
public:
    UFUNCTION(BlueprintCallable) void AddOption(const FText& Option);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ClearOptions();
    UFUNCTION(BlueprintCallable) void ClearSelection();
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 FindOptionIndex(const FText& Option) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetOptionAtIndex(int32 Index) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetOptionCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetSelectedIndex() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetSelectedOption() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsOpen() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RefreshOptions();
    UFUNCTION(BlueprintCallable) bool RemoveOption(const FText& Option);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void SetSelectedIndex(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSelectedOption(FText Option);  // parameters 0x18

    // Virtual functions that start here:
    //   HandleGenerateWidget, HandleOpening, HandleSelectionChanged
};
