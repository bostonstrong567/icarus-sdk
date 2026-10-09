// /Script/UMG.InvalidationBox
// Derives from: UContentWidget > UPanelWidget > UWidget > UVisual > UObject
// size 0x138, declared in Engine/Source/Runtime/UMG/Public/Components/InvalidationBox.h

UCLASS()
class UInvalidationBox : public UContentWidget
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) bool bCanCache;  // 0x0120, size 0x1
    UPROPERTY(Deprecated) bool CacheRelativeTransforms;  // 0x0121, size 0x1
    TSharedPtr<SInvalidationPanel,0> MyInvalidationPanel;  // 0x0128, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetCanCache() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void InvalidateCache();
    UFUNCTION(BlueprintCallable) void SetCanCache(bool CanCache);  // parameters 0x1
};
