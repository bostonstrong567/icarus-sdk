// /Script/ReplicationGraph.ReplicationGraphNode_ActorList
// Derives from: UReplicationGraphNode > UObject
// size 0xD0, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient)
class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FActorRepListRefView ReplicationActorList;  // 0x0050, protected
    FStreamingLevelActorListCollection StreamingLevelCollection;  // 0x0060, protected
};
