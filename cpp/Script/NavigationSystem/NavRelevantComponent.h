// /Script/NavigationSystem.NavRelevantComponent
// Derives from: UActorComponent > UObject
// size 0xE0, declared in Engine/Source/Runtime/NavigationSystem/Public/NavRelevantComponent.h

UCLASS(Config=Engine)
class UNavRelevantComponent : public UActorComponent, public INavRelevantInterface
{
public:
    UPROPERTY() uint8 bAttachToOwnersRoot : 1;  // 0x00D4, mask 0x01
    UPROPERTY(Transient) UObject* CachedNavParent;  // 0x00D8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FBox Bounds;  // 0x00B8, protected
    uint32 : 1 bBoundsInitialized;  // 0x00D4, protected
    uint32 : 1 bNavParentCacheInitialized;  // 0x00D4, protected

    UFUNCTION(BlueprintCallable) void SetNavigationRelevancy(bool bRelevant);  // parameters 0x1

    // Virtual functions that start here:
    //   CalcAndCacheBounds
};
