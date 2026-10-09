// /Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// Derives from: UReplicationGraphNode > UObject
// size 0x68, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient)
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() UReplicationGraphNode* ChildNode;  // 0x0050, size 0x8
    TArray<UClass *,TSizedDefaultAllocator<32> > AlwaysRelevantClasses;  // 0x0058, not reflected
};
