// /Script/ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
// Derives from: UReplicationGraphNode > UObject
// size 0x70, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient)
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
{
public:
    UPROPERTY() TArray<FTearOffActorInfo> TearOffActors;  // 0x0050, size 0x10
    FActorRepListRefView ReplicationActorList;  // 0x0060, not reflected
};
