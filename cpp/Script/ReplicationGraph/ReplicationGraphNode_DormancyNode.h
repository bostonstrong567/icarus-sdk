// /Script/ReplicationGraph.ReplicationGraphNode_DormancyNode
// Derives from: UReplicationGraphNode_ActorList > UReplicationGraphNode > UObject
// size 0xE0, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient)
class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSortedMap<TObjectKey<UNetReplicationGraphConnection>,UReplicationGraphNode_ConnectionDormancyNode *,TSizedDefaultAllocator<32>,TLess<TObjectKey<UNetReplicationGraphConnection> const &> > ConnectionNodes;  // 0x00D0, private
};
