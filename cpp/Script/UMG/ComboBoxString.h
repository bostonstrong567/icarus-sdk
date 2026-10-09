// /Script/UMG.ComboBoxString
// Derives from: UWidget > UVisual > UObject
// size 0xE00, declared in Engine/Source/Runtime/UMG/Public/Components/ComboBoxString.h

UCLASS()
class UComboBoxString : public UWidget
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FComboBoxStyle WidgetStyle;  // 0x0128, size 0x3F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTableRowStyle ItemStyle;  // 0x0518, size 0x7C8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin ContentPadding;  // 0x0CE0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxListHeight;  // 0x0CF0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool HasDownArrow;  // 0x0CF4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool EnableGamepadNavigationMode;  // 0x0CF5, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSlateFontInfo Font;  // 0x0CF8, size 0x58
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSlateColor ForegroundColor;  // 0x0D50, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsFocusable;  // 0x0D78, size 0x1
    UPROPERTY(EditAnywhere) FGenerateWidgetForString OnGenerateWidgetEvent;  // 0x0D7C, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSelectionChangedEvent OnSelectionChanged;  // 0x0D90, size 0x10
    UPROPERTY(BlueprintAssignable) FOnOpeningEvent OnOpening;  // 0x0DA0, size 0x10
protected:
    TArray<TSharedPtr<FString,0>,TSizedDefaultAllocator<32> > Options;  // 0x0DB0, not reflected
    TSharedPtr<SComboBox<TSharedPtr<FString,0> >,0> MyComboBox;  // 0x0DC0, not reflected
    TSharedPtr<SBox,0> ComboBoxContent;  // 0x0DD0, not reflected
    TWeakPtr<STextBlock,0> DefaultComboBoxContent;  // 0x0DE0, not reflected
    TSharedPtr<FString,0> CurrentOptionPtr;  // 0x0DF0, not reflected
private:
    UPROPERTY(EditAnywhere) TArray<FString> DefaultOptions;  // 0x0108, size 0x10
    UPROPERTY(EditAnywhere) FString SelectedOption;  // 0x0118, size 0x10
public:
    UFUNCTION(BlueprintCallable) void AddOption(FString Option);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ClearOptions();
    UFUNCTION(BlueprintCallable) void ClearSelection();
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 FindOptionIndex(FString Option) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetOptionAtIndex(int32 Index) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetOptionCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetSelectedIndex() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetSelectedOption() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsOpen() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RefreshOptions();
    UFUNCTION(BlueprintCallable) bool RemoveOption(FString Option);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SetSelectedIndex(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSelectedOption(FString Option);  // parameters 0x10

    // Virtual functions that start here:
    //   HandleGenerateWidget, HandleOpening, HandleSelectionChanged
};
