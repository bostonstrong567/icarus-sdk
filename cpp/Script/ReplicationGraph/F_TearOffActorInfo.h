// /Script/ReplicationGraph.TearOffActorInfo
// size 0x18, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

USTRUCT()
struct FTearOffActorInfo
{
    UPROPERTY() AActor* Actor;  // 0x0008, size 0x8

    // Not reflected:
    uint32 TearOffFrameNum;  // 0x0000
    bool bHasReppedOnce;  // 0x0010
};
