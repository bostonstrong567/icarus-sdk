// /Script/ChaosSolverEngine.ChaosGameplayEventDispatcher
// Derives from: UChaosEventListenerComponent > UActorComponent > UObject
// size 0x270, declared in Engine/Source/Runtime/Experimental/ChaosSolverEngine/Public/Chaos/ChaosGameplayEventDispatcher.h

UCLASS(Config=Engine)
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
public:
    UPROPERTY() TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations;  // 0x01C8, size 0x50
    UPROPERTY() TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations;  // 0x0218, size 0x50

    // Not reflected: the engine's scripting cannot see these.
    TMap<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int,0> > ContactPairToPendingNotifyMap;  // 0x00B8, private
    TMap<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int,0> > ContactPairToPendingChaosNotifyMap;  // 0x0108, private
    TArray<FChaosPendingCollisionNotify,TSizedDefaultAllocator<32> > PendingChaosCollisionNotifies;  // 0x0158, private
    TArray<FCollisionNotifyInfo,TSizedDefaultAllocator<32> > PendingCollisionNotifies;  // 0x0168, private
    TMap<FBodyInstance *,enum ESleepEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBodyInstance *,enum ESleepEvent,0> > PendingSleepNotifies;  // 0x0178, private
    float LastCollisionDataTime;  // 0x0268, private
    float LastBreakingDataTime;  // 0x026C, private
};
