// /Script/ReplicationGraph.NetReplicationGraphConnection
// Derives from: UReplicationConnectionDriver > UObject
// size 0x238, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient)
class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() UNetConnection* NetConnection;  // 0x0028, size 0x8
    FPerConnectionActorInfoMap ActorInfoMap;  // 0x0030, not reflected
    TMulticastDelegate<void __cdecl(UNetReplicationGraphConnection *,FPrioritizedRepList *),FDefaultDelegateUserPolicy> OnPostReplicatePrioritizeLists;  // 0x00D8, not reflected
    TMulticastDelegate<void __cdecl(FName,UWorld *),FDefaultDelegateUserPolicy> OnClientVisibleLevelNameAdd;  // 0x00F0, not reflected
    TMap<FName,TMulticastDelegate<void __cdecl(FName,UWorld *),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void __cdecl(FName,UWorld *),FDefaultDelegateUserPolicy>,0> > OnClientVisibleLevelNameAddMap;  // 0x0108, not reflected
    TMulticastDelegate<void __cdecl(FName),FDefaultDelegateUserPolicy> OnClientVisibleLevelNameRemove;  // 0x0158, not reflected
    UPROPERTY() AReplicationGraphDebugActor* DebugActor;  // 0x0170, size 0x8
    bool bEnableDebugging;  // 0x0178, not reflected
    int32 ConnectionOrderNum;  // 0x017C, not reflected
    int32 ConnectionId;  // 0x0180, not reflected
    UPROPERTY() TArray<FLastLocationGatherInfo> LastGatherLocations;  // 0x0188, size 0x10
    int32 QueuedBitsForActorDiscovery;  // 0x0198, not reflected
private:
    UPROPERTY() TArray<UReplicationGraphNode*> ConnectionGraphNodes;  // 0x01A0, size 0x10
    UPROPERTY() UReplicationGraphNode_TearOff_ForConnection* TearOffNode;  // 0x01B0, size 0x8
    TArray<UNetReplicationGraphConnection::FCachedDestructInfo,TSizedDefaultAllocator<32> > OutOfRangeDestroyedActors;  // 0x01B8, not reflected
    TArray<UNetReplicationGraphConnection::FCachedDestructInfo,TSizedDefaultAllocator<32> > PendingDestructInfoList;  // 0x01C8, not reflected
    TSet<FActorDestructionInfo *,DefaultKeyFuncs<FActorDestructionInfo *,0>,FDefaultSetAllocator> TrackedDestructionInfoPtrs;  // 0x01D8, not reflected
    TArray<UNetReplicationGraphConnection::FCachedDormantDestructInfo,TSizedDefaultAllocator<32> > PendingDormantDestructList;  // 0x0228, not reflected

    // Virtual functions that start here:
    //   GetClientVisibleLevelNames, NotifyResetAllNetworkActors
};
