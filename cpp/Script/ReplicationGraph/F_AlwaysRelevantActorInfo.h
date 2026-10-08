// /Script/ReplicationGraph.AlwaysRelevantActorInfo
// size 0x18, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

USTRUCT()
struct FAlwaysRelevantActorInfo
{
    UPROPERTY() UNetConnection* Connection;  // 0x0000, size 0x8
    UPROPERTY() AActor* LastViewer;  // 0x0008, size 0x8
    UPROPERTY() AActor* LastViewTarget;  // 0x0010, size 0x8
};
