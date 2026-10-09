// /Script/ReplicationGraph.ReplicationGraphNode
// Derives from: UObject
// size 0x50, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Abstract, Transient, Config=Engine)
class UReplicationGraphNode : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() TArray<UReplicationGraphNode*> AllChildNodes;  // 0x0028, size 0x10
    TSharedPtr<FReplicationGraphGlobalData,0> GraphGlobals;  // 0x0038, not reflected
    bool bRequiresPrepareForReplicationCall;  // 0x0048, not reflected

    // Virtual functions that start here:
    //   GatherActorListsForConnection, GetAllActorsInNode_Debugging, GetDebugString, LogNode
    //   NotifyAddNetworkActor, NotifyRemoveNetworkActor, NotifyResetAllNetworkActors
    //   OnCollectActorRepListStats, PrepareForReplication, TearDown
};
