// /Script/ReplicationGraph.ConnectionAlwaysRelevantNodePair
// size 0x10, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/BasicReplicationGraph.h

USTRUCT()
struct FConnectionAlwaysRelevantNodePair
{
public:
    UPROPERTY() UNetConnection* NetConnection;  // 0x0000, size 0x8
    UPROPERTY() UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;  // 0x0008, size 0x8
};
