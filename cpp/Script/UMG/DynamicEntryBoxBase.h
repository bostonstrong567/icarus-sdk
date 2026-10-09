// /Script/UMG.DynamicEntryBoxBase
// Derives from: UWidget > UVisual > UObject
// size 0x1D8, declared in Engine/Source/Runtime/UMG/Public/Components/DynamicEntryBoxBase.h

UCLASS(Abstract)
class UDynamicEntryBoxBase : public UWidget
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) EDynamicBoxType EntryBoxType;  // 0x0108, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D EntrySpacing;  // 0x010C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FVector2D> SpacingPattern;  // 0x0118, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSlateChildSize EntrySizeRule;  // 0x0128, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EHorizontalAlignment> EntryHorizontalAlignment;  // 0x0130, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EVerticalAlignment> EntryVerticalAlignment;  // 0x0131, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MaxElementSize;  // 0x0134, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FRadialBoxSettings RadialBoxSettings;  // 0x0138, size 0x10
    TSharedPtr<SPanel,0> MyPanelWidget;  // 0x0148, not reflected
private:
    UPROPERTY(Transient) FUserWidgetPool EntryWidgetPool;  // 0x0158, size 0x80
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UUserWidget*> GetAllEntries() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumEntries() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetEntrySpacing(const FVector2D& InEntrySpacing);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetRadialSettings(const FRadialBoxSettings& InSettings);  // parameters 0x10

    // Virtual functions that start here:
    //   AddEntryChild
};
