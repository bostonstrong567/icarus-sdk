// /Script/ReplicationGraph.ReplicationGraphNode_GridCell
// Derives from: UReplicationGraphNode_ActorList > UReplicationGraphNode > UObject
// size 0x120, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient)
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{
public:
    UPROPERTY() UReplicationGraphNode* DynamicNode;  // 0x0110, size 0x8
    UPROPERTY() UReplicationGraphNode_DormancyNode* DormancyNode;  // 0x0118, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TFunction<UReplicationGraphNode * __cdecl(UReplicationGraphNode_GridCell *)> CreateDynamicNodeOverride;  // 0x00D0
};
