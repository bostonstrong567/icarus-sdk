// /Script/ReplicationGraph.NetReplicationGraphConnection
// Derives from: UReplicationConnectionDriver > UObject
// size 0x238, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient)
class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{
public:
    UPROPERTY() UNetConnection* NetConnection;  // 0x0028, size 0x8
    UPROPERTY() AReplicationGraphDebugActor* DebugActor;  // 0x0170, size 0x8
    UPROPERTY() TArray<FLastLocationGatherInfo> LastGatherLocations;  // 0x0188, size 0x10
    UPROPERTY() TArray<UReplicationGraphNode*> ConnectionGraphNodes;  // 0x01A0, size 0x10
    UPROPERTY() UReplicationGraphNode_TearOff_ForConnection* TearOffNode;  // 0x01B0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FPerConnectionActorInfoMap ActorInfoMap;  // 0x0030
    TMulticastDelegate<void __cdecl(UNetReplicationGraphConnection *,FPrioritizedRepList *),FDefaultDelegateUserPolicy> OnPostReplicatePrioritizeLists;  // 0x00D8
    TMulticastDelegate<void __cdecl(FName,UWorld *),FDefaultDelegateUserPolicy> OnClientVisibleLevelNameAdd;  // 0x00F0
    TMap<FName,TMulticastDelegate<void __cdecl(FName,UWorld *),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void __cdecl(FName,UWorld *),FDefaultDelegateUserPolicy>,0> > OnClientVisibleLevelNameAddMap;  // 0x0108
    TMulticastDelegate<void __cdecl(FName),FDefaultDelegateUserPolicy> OnClientVisibleLevelNameRemove;  // 0x0158
    bool bEnableDebugging;  // 0x0178
    int32 ConnectionOrderNum;  // 0x017C
    int32 ConnectionId;  // 0x0180
    int32 QueuedBitsForActorDiscovery;  // 0x0198
    TArray<UNetReplicationGraphConnection::FCachedDestructInfo,TSizedDefaultAllocator<32> > OutOfRangeDestroyedActors;  // 0x01B8, private
    TArray<UNetReplicationGraphConnection::FCachedDestructInfo,TSizedDefaultAllocator<32> > PendingDestructInfoList;  // 0x01C8, private
    TSet<FActorDestructionInfo *,DefaultKeyFuncs<FActorDestructionInfo *,0>,FDefaultSetAllocator> TrackedDestructionInfoPtrs;  // 0x01D8, private
    TArray<UNetReplicationGraphConnection::FCachedDormantDestructInfo,TSizedDefaultAllocator<32> > PendingDormantDestructList;  // 0x0228, private

    // Virtual functions that start here:
    //   GetClientVisibleLevelNames, NotifyResetAllNetworkActors
};
