// /Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// Derives from: UReplicationGraphNode > UObject
// size 0x68, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient)
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{
public:
    UPROPERTY() UReplicationGraphNode* ChildNode;  // 0x0050, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TArray<UClass *,TSizedDefaultAllocator<32> > AlwaysRelevantClasses;  // 0x0058, protected
};
