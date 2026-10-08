// /Script/Icarus.IcarusNavigationSystem
// Derives from: UNavigationSystemV1 > UNavigationSystemBase > UObject
// size 0x16A0, declared in Icarus/Source/Icarus/Navigation/IcarusNavigationSystem.h

UCLASS(Transient, Config=Engine)
class UIcarusNavigationSystem : public UNavigationSystemV1
{
public:
    UPROPERTY(BlueprintAssignable) FOnPrePendingBoundsUpdateClearedSignature OnPrePendingBoundsUpdateCleared;  // 0x15E0, size 0x10
    UPROPERTY() TSet<ULevelStreaming*> CompositionStreamingLevels;  // 0x15F0, size 0x50
    UPROPERTY() TSet<ULevelStreaming*> BlockingStreamingLevels;  // 0x1640, size 0x50
    UPROPERTY() TArray<ULevelStreamingDelegateManager*> LevelStreamingManagers;  // 0x1690, size 0x10

    UFUNCTION(BlueprintCallable) void AddDirtyArea_BP(const FVector& Origin, const FVector& Extent, bool bIsIcarusNavigationDirtier);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static UIcarusNavigationSystem* GetIcarusNavigationSystem(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION() void OnStreamingLevelStateUpdated(ULevelStreaming* UpdatedStreamingLevel, bool bIsVisible);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void UnregisterActorAndComponentsInOctree(AActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateActorInNavOctree_BP(AActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateComponentInNavOctree_BP(UActorComponent* Comp);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateNavOctreeBounds_BP(AActor* Actor);  // parameters 0x8
};
