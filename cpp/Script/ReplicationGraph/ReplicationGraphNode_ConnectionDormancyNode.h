// /Script/ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
// Derives from: UReplicationGraphNode_ActorList > UReplicationGraphNode > UObject
// size 0x150, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient)
class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TObjectKey<UNetReplicationGraphConnection> ConnectionOwner;  // 0x00D0, private
    uint32 LastGatheredFrame;  // 0x00D8, private
    int32 TrickleStartCounter;  // 0x00DC, private
    FStreamingLevelActorListCollection RemovedStreamingLevelActorListCollection;  // 0x00E0, private
};
