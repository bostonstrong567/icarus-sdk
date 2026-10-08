// /Script/ReplicationGraph.ReplicationGraph
// Derives from: UReplicationDriver > UObject
// size 0x4B0, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient, Config=Engine)
class UReplicationGraph : public UReplicationDriver
{
public:
    UPROPERTY(Config) TSubclassOf<UNetReplicationGraphConnection> ReplicationConnectionManagerClass;  // 0x0028, size 0x8
    UPROPERTY() UNetDriver* NetDriver;  // 0x0030, size 0x8
    UPROPERTY() TArray<UNetReplicationGraphConnection*> Connections;  // 0x0038, size 0x10
    UPROPERTY() TArray<UNetReplicationGraphConnection*> PendingConnections;  // 0x0048, size 0x10
    UPROPERTY() TArray<UReplicationGraphNode*> GlobalGraphNodes;  // 0x0098, size 0x10
    UPROPERTY() TArray<UReplicationGraphNode*> PrepareForReplicationNodes;  // 0x00A8, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    float DestructInfoMaxDistanceSquared;  // 0x0058
    UReplicationGraph::FPrioritizationConstants PrioritizationConstants;  // 0x005C
    UReplicationGraph::FFastSharedPathConstants FastSharedPathConstants;  // 0x0064
    uint32 GlobalActorChannelFrameNumTimeout;  // 0x0070, protected
    TSharedPtr<FReplicationGraphGlobalData,0> GraphGlobals;  // 0x0078, protected
    FPrioritizedRepList PrioritizedReplicationList;  // 0x0088, protected
    FGlobalActorReplicationInfoMap GlobalActorReplicationInfoMap;  // 0x00C0, protected
    TSet<AActor *,DefaultKeyFuncs<AActor *,0>,FDefaultSetAllocator> ActiveNetworkActors;  // 0x01A0, protected
    TMap<FObjectKey,FRPCSendPolicyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FRPCSendPolicyInfo,0> > RPCSendPolicyMap;  // 0x01F0, protected
    TClassMap<bool> RPC_Multicast_OpenChannelForClass;  // 0x0240, protected
    FReplicationGraphCSVTracker CSVTracker;  // 0x02D0, protected
    FOutBunch * FastSharedReplicationBunch;  // 0x0460, protected
    UActorChannel * FastSharedReplicationChannel;  // 0x0468, protected
    FName FastSharedReplicationFuncName;  // 0x0470, protected
    TArray<UNetConnection *,TSizedDefaultAllocator<32> > ConnectionsNeedingsPostTickDispatchFlush;  // 0x0478, protected
    UReplicationGraph::FFrameReplicationStats FrameReplicationStats;  // 0x0488, private
    bool bWasConnectionSaturated;  // 0x0498, private
    uint32 ReplicationGraphFrame;  // 0x049C, private
    int32 ActorDiscoveryMaxBitsPerFrame;  // 0x04A0, private
    float TimeLeftUntilUpdate;  // 0x04A4, private

    // Virtual functions that start here:
    //   AddReplayViewers, CollectRepListStats, InitConnectionGraphNodes, InitGlobalActorClassSettings
    //   InitGlobalGraphNodes, InitNode, InitializeForWorld, LogConnectionGraphNodes, LogGlobalGraphNodes
    //   LogGraph, PostServerReplicateStats, RouteAddNetworkActorToNodes, RouteRemoveNetworkActorToNodes
};
