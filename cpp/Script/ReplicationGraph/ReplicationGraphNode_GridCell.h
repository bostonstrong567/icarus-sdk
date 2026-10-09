// /Script/ReplicationGraph.ReplicationGraphNode_GridCell
// Derives from: UReplicationGraphNode_ActorList > UReplicationGraphNode > UObject
// size 0x120, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient)
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    TFunction<UReplicationGraphNode * __cdecl(UReplicationGraphNode_GridCell *)> CreateDynamicNodeOverride;  // 0x00D0, not reflected
private:
    UPROPERTY() UReplicationGraphNode* DynamicNode;  // 0x0110, size 0x8
    UPROPERTY() UReplicationGraphNode_DormancyNode* DormancyNode;  // 0x0118, size 0x8
};
