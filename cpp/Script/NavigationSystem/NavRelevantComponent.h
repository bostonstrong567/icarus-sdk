// /Script/NavigationSystem.NavRelevantComponent
// Derives from: UActorComponent > UObject
// size 0xE0, declared in Engine/Source/Runtime/NavigationSystem/Public/NavRelevantComponent.h

UCLASS(Config=Engine)
class UNavRelevantComponent : public UActorComponent, public INavRelevantInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    FBox Bounds;  // 0x00B8, not reflected
    uint32 : 1 bBoundsInitialized;  // 0x00D4, not reflected
    uint32 : 1 bNavParentCacheInitialized;  // 0x00D4, not reflected
    UPROPERTY() uint8 bAttachToOwnersRoot : 1;  // 0x00D4, mask 0x01
    UPROPERTY(Transient) UObject* CachedNavParent;  // 0x00D8, size 0x8
public:
    UFUNCTION(BlueprintCallable) void SetNavigationRelevancy(bool bRelevant);  // parameters 0x1

    // Virtual functions that start here:
    //   CalcAndCacheBounds
};
