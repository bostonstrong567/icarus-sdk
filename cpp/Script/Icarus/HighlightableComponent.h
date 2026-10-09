// /Script/Icarus.HighlightableComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xE8, declared in Icarus/Source/Icarus/Traits/HighlightableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UHighlightableComponent : public UTraitComponent
{
public:
    UPROPERTY(BlueprintAssignable) FHighlightChangedSignature OnHighlightChanged;  // 0x00D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAlwaysHighlight;  // 0x00D1, size 0x1
protected:
    TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32> > HighlightedComponents;  // 0x00D8, not reflected
public:
    UFUNCTION(BlueprintNativeEvent) bool CanHighlight() const;  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) bool CanUnhighlight() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetHighlightableData(FHighlightableData& OutData) const;  // parameters 0x79
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsHighlighted() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetHighlight(UPrimitiveComponent* Component, bool bHighlighted, int32 StencilValue);  // parameters 0x10

    // Virtual functions that start here:
    //   CanHighlight_Implementation, CanUnhighlight_Implementation
};
