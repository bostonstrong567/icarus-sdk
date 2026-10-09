// /Script/ReplicationGraph.ReplicationGraph
// Derives from: UReplicationDriver > UObject
// size 0x4B0, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient, Config=Engine)
class UReplicationGraph : public UReplicationDriver
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Config) TSubclassOf<UNetReplicationGraphConnection> ReplicationConnectionManagerClass;  // 0x0028, size 0x8
    UPROPERTY() UNetDriver* NetDriver;  // 0x0030, size 0x8
    UPROPERTY() TArray<UNetReplicationGraphConnection*> Connections;  // 0x0038, size 0x10
    UPROPERTY() TArray<UNetReplicationGraphConnection*> PendingConnections;  // 0x0048, size 0x10
    float DestructInfoMaxDistanceSquared;  // 0x0058, not reflected
    UReplicationGraph::FPrioritizationConstants PrioritizationConstants;  // 0x005C, not reflected
    UReplicationGraph::FFastSharedPathConstants FastSharedPathConstants;  // 0x0064, not reflected
protected:
    uint32 GlobalActorChannelFrameNumTimeout;  // 0x0070, not reflected
    TSharedPtr<FReplicationGraphGlobalData,0> GraphGlobals;  // 0x0078, not reflected
    FPrioritizedRepList PrioritizedReplicationList;  // 0x0088, not reflected
    UPROPERTY() TArray<UReplicationGraphNode*> GlobalGraphNodes;  // 0x0098, size 0x10
    UPROPERTY() TArray<UReplicationGraphNode*> PrepareForReplicationNodes;  // 0x00A8, size 0x10
    FGlobalActorReplicationInfoMap GlobalActorReplicationInfoMap;  // 0x00C0, not reflected
    TSet<AActor *,DefaultKeyFuncs<AActor *,0>,FDefaultSetAllocator> ActiveNetworkActors;  // 0x01A0, not reflected
    TMap<FObjectKey,FRPCSendPolicyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FRPCSendPolicyInfo,0> > RPCSendPolicyMap;  // 0x01F0, not reflected
    TClassMap<bool> RPC_Multicast_OpenChannelForClass;  // 0x0240, not reflected
    FReplicationGraphCSVTracker CSVTracker;  // 0x02D0, not reflected
    FOutBunch * FastSharedReplicationBunch;  // 0x0460, not reflected
    UActorChannel * FastSharedReplicationChannel;  // 0x0468, not reflected
    FName FastSharedReplicationFuncName;  // 0x0470, not reflected
    TArray<UNetConnection *,TSizedDefaultAllocator<32> > ConnectionsNeedingsPostTickDispatchFlush;  // 0x0478, not reflected
private:
    UReplicationGraph::FFrameReplicationStats FrameReplicationStats;  // 0x0488, not reflected
    bool bWasConnectionSaturated;  // 0x0498, not reflected
    uint32 ReplicationGraphFrame;  // 0x049C, not reflected
    int32 ActorDiscoveryMaxBitsPerFrame;  // 0x04A0, not reflected
    float TimeLeftUntilUpdate;  // 0x04A4, not reflected

    // Virtual functions that start here:
    //   AddReplayViewers, CollectRepListStats, InitConnectionGraphNodes, InitGlobalActorClassSettings
    //   InitGlobalGraphNodes, InitNode, InitializeForWorld, LogConnectionGraphNodes, LogGlobalGraphNodes
    //   LogGraph, PostServerReplicateStats, RouteAddNetworkActorToNodes, RouteRemoveNetworkActorToNodes
};
