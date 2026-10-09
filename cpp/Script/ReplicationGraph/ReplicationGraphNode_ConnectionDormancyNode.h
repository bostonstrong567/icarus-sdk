// /Script/ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
// Derives from: UReplicationGraphNode_ActorList > UReplicationGraphNode > UObject
// size 0x150, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient)
class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
{
private:
    TObjectKey<UNetReplicationGraphConnection> ConnectionOwner;  // 0x00D0, not reflected
    uint32 LastGatheredFrame;  // 0x00D8, not reflected
    int32 TrickleStartCounter;  // 0x00DC, not reflected
    FStreamingLevelActorListCollection RemovedStreamingLevelActorListCollection;  // 0x00E0, not reflected
};
