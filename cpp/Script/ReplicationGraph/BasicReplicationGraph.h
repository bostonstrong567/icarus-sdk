// /Script/ReplicationGraph.BasicReplicationGraph
// Derives from: UReplicationGraph > UReplicationDriver > UObject
// size 0x4E0, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/BasicReplicationGraph.h

UCLASS(Transient, Config=Engine)
class UBasicReplicationGraph : public UReplicationGraph
{
public:
    UPROPERTY() UReplicationGraphNode_GridSpatialization2D* GridNode;  // 0x04A8, size 0x8
    UPROPERTY() UReplicationGraphNode_ActorList* AlwaysRelevantNode;  // 0x04B0, size 0x8
    UPROPERTY() TArray<FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList;  // 0x04B8, size 0x10
    UPROPERTY() TArray<AActor*> ActorsWithoutNetConnection;  // 0x04C8, size 0x10
};
