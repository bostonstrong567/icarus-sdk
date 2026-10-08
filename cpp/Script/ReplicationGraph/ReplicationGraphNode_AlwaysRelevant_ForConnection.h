// /Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// Derives from: UReplicationGraphNode_ActorList > UReplicationGraphNode > UObject
// size 0xF0, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient)
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{
public:
    UPROPERTY() TArray<FAlwaysRelevantActorInfo> PastRelevantActors;  // 0x00E0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FActorRepListRefView ReplicationActorList;  // 0x00D0
};
