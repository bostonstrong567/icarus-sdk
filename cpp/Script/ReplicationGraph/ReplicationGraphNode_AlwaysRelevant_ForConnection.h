// /Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// Derives from: UReplicationGraphNode_ActorList > UReplicationGraphNode > UObject
// size 0xF0, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient)
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{
public:
    FActorRepListRefView ReplicationActorList;  // 0x00D0, not reflected
    UPROPERTY() TArray<FAlwaysRelevantActorInfo> PastRelevantActors;  // 0x00E0, size 0x10
};
