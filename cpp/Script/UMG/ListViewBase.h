// /Script/UMG.ListViewBase
// Derives from: UWidget > UVisual > UObject
// size 0x218, declared in Engine/Source/Runtime/UMG/Public/Components/ListViewBase.h

UCLASS(Abstract)
class UListViewBase : public UWidget
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<UUserWidget> EntryWidgetClass;  // 0x0108, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float WheelScrollMultiplier;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bEnableScrollAnimation;  // 0x0114, size 0x1
    UPROPERTY(EditAnywhere) bool bEnableFixedLineOffset;  // 0x0115, size 0x1
    UPROPERTY(EditAnywhere) float FixedLineScrollOffset;  // 0x0118, size 0x4
private:
    UPROPERTY(BlueprintAssignable) FOnListEntryGeneratedDynamic BP_OnEntryGenerated;  // 0x0120, size 0x10
    UPROPERTY(BlueprintAssignable) FOnListEntryReleasedDynamic BP_OnEntryReleased;  // 0x0130, size 0x10
    UPROPERTY(Transient) FUserWidgetPool EntryWidgetPool;  // 0x0140, size 0x80
    FTimerHandle EntryGenAnnouncementTimerHandle;  // 0x01C0, not reflected
    TArray<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,TSizedDefaultAllocator<32> > GeneratedEntriesToAnnounce;  // 0x01C8, not reflected
    UListViewBase::FOnListEntryGenerated OnListEntryGeneratedEvent;  // 0x01D8, not reflected
    UListViewBase::FOnEntryWidgetReleased OnEntryWidgetReleasedEvent;  // 0x01F0, not reflected
    TSharedPtr<STableViewBase,0> MyTableViewBase;  // 0x0208, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UUserWidget*> GetDisplayedEntryWidgets() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RegenerateAllEntries();
    UFUNCTION(BlueprintCallable) void RequestRefresh();
    UFUNCTION(BlueprintCallable) void ScrollToBottom();
    UFUNCTION(BlueprintCallable) void ScrollToTop();
    UFUNCTION(BlueprintCallable) void SetScrollOffset(float InScrollOffset);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetScrollbarVisibility(ESlateVisibility InVisibility);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);  // parameters 0x4

    // Virtual functions that start here:
    //   HandleListEntryHovered, HandleListEntryUnhovered, RebuildListWidget
};
