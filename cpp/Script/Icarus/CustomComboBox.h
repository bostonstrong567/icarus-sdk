// /Script/Icarus.CustomComboBox
// Derives from: UWidget > UVisual > UObject
// size 0x598, declared in Icarus/Source/Icarus/UI/CustomComboBox.h

UCLASS()
class UCustomComboBox : public UWidget
{
public:
    UPROPERTY(EditAnywhere) FComboButtonStyle ComboStyle;  // 0x0108, size 0x3B8
    UPROPERTY(BlueprintAssignable) FOnItemSet OnItemSet;  // 0x04C0, size 0x10
    UPROPERTY() TArray<UUserWidget*> WidgetsRef;  // 0x0510, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SComboButton,0> ComboButton;  // 0x04D0, protected
    TSharedPtr<SContentBox,0> ComboButtonContent;  // 0x04E0, protected
    TSharedPtr<SSearchBox,0> ComboButtonSearchBox;  // 0x04F0, protected
    TSharedPtr<SListView<TSharedPtr<FWidgetItem,0> >,0> ComboButtonListView;  // 0x0500, protected
    TMap<FString,TSharedPtr<FWidgetItem,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FWidgetItem,0>,0> > Items;  // 0x0520, protected
    TArray<TSharedPtr<FWidgetItem,0>,TSizedDefaultAllocator<32> > FilteredItems;  // 0x0570, protected
    FString CurrentFilterText;  // 0x0580, protected
    bool bOpening;  // 0x0590, protected
    bool bHideSearchBox;  // 0x0591, protected

    UFUNCTION(BlueprintCallable) void AddItem(FString Name, UUserWidget* Widget);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ClearChildren();
    UFUNCTION(BlueprintCallable, BlueprintPure) UUserWidget* GetSelectedWidget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HideSearchBox(bool bHide);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsOpen() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFilter(FString FilterText);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetOpen(bool bOpen);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSelectedIndex(int32 Index, bool bApplyToCombo);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetSelectedName(FString Name, bool bApplyToCombo);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SortItems();
};
