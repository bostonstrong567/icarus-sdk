// /Script/ReplicationGraph.ReplicationGraphNode
// Derives from: UObject
// size 0x50, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Abstract, Transient, Config=Engine)
class UReplicationGraphNode : public UObject
{
public:
    UPROPERTY() TArray<UReplicationGraphNode*> AllChildNodes;  // 0x0028, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<FReplicationGraphGlobalData,0> GraphGlobals;  // 0x0038, protected
    bool bRequiresPrepareForReplicationCall;  // 0x0048, protected

    // Virtual functions that start here:
    //   GatherActorListsForConnection, GetAllActorsInNode_Debugging, GetDebugString, LogNode
    //   NotifyAddNetworkActor, NotifyRemoveNetworkActor, NotifyResetAllNetworkActors
    //   OnCollectActorRepListStats, PrepareForReplication, TearDown
};
