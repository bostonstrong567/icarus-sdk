// /Script/ReplicationGraph.ReplicationGraphNode_ActorList
// Derives from: UReplicationGraphNode > UObject
// size 0xD0, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient)
class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{
protected:
    FActorRepListRefView ReplicationActorList;  // 0x0050, not reflected
    FStreamingLevelActorListCollection StreamingLevelCollection;  // 0x0060, not reflected
};
