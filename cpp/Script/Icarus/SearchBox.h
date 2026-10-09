// /Script/Icarus.SearchBox
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0xE30, declared in Icarus/Source/Icarus/UI/SearchBox.h

UCLASS(EditInlineNew)
class USearchBox : public UUserWidget
{
public:
    TSharedPtr<SSearchBox,0> MySearchBox;  // 0x0260, not reflected
    UPROPERTY(EditAnywhere) FSearchBoxStyle Style;  // 0x0270, size 0xA90
    UPROPERTY(EditAnywhere) FText HintText;  // 0x0D00, size 0x18
    UPROPERTY(EditAnywhere) FText InitialText;  // 0x0D18, size 0x18
    UPROPERTY(EditAnywhere) bool IsSearching;  // 0x0D30, size 0x1
    UPROPERTY(BlueprintAssignable) FOnSearchBoxChangedEvent OnSearchTextChanged;  // 0x0D38, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSearchBoxCommittedEvent OnSearchTextCommitted;  // 0x0D48, size 0x10
    UPROPERTY(BlueprintAssignable) FSearchBoxReply OnSearchKeyDownHandler;  // 0x0D58, size 0x10
    FReply HackReply;  // 0x0D68, not reflected
    UPROPERTY(EditAnywhere) bool SelectAllTextWhenFocused;  // 0x0E20, size 0x1
    UPROPERTY(EditAnywhere) float MinDesiredWidth;  // 0x0E24, size 0x4
    UPROPERTY(EditAnywhere) bool DelayChangeNotificationsWhileTyping;  // 0x0E28, size 0x1
    UPROPERTY(BlueprintReadOnly) bool bCommitting;  // 0x0E29, size 0x1

    UFUNCTION(BlueprintCallable) FText GetSearchText();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetText();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void KeyDownHandled();
    UFUNCTION(BlueprintCallable) void SelectAllText();
    UFUNCTION(BlueprintCallable) void SetText(FText Text);  // parameters 0x18
};
