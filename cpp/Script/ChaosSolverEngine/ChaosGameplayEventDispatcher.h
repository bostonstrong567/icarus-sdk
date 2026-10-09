// /Script/ChaosSolverEngine.ChaosGameplayEventDispatcher
// Derives from: UChaosEventListenerComponent > UActorComponent > UObject
// size 0x270, declared in Engine/Source/Runtime/Experimental/ChaosSolverEngine/Public/Chaos/ChaosGameplayEventDispatcher.h

UCLASS(Config=Engine)
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    TMap<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int,0> > ContactPairToPendingNotifyMap;  // 0x00B8, not reflected
    TMap<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int,0> > ContactPairToPendingChaosNotifyMap;  // 0x0108, not reflected
    TArray<FChaosPendingCollisionNotify,TSizedDefaultAllocator<32> > PendingChaosCollisionNotifies;  // 0x0158, not reflected
    TArray<FCollisionNotifyInfo,TSizedDefaultAllocator<32> > PendingCollisionNotifies;  // 0x0168, not reflected
    TMap<FBodyInstance *,enum ESleepEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance *,enum ESleepEvent,0> > PendingSleepNotifies;  // 0x0178, not reflected
    UPROPERTY() TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations;  // 0x01C8, size 0x50
    UPROPERTY() TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations;  // 0x0218, size 0x50
    float LastCollisionDataTime;  // 0x0268, not reflected
    float LastBreakingDataTime;  // 0x026C, not reflected
};
