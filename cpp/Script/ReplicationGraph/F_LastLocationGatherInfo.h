// /Script/ReplicationGraph.LastLocationGatherInfo
// size 0x20, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

USTRUCT()
struct FLastLocationGatherInfo
{
    UPROPERTY() UNetConnection* Connection;  // 0x0000, size 0x8
    UPROPERTY() FVector LastLocation;  // 0x0008, size 0xC
    UPROPERTY() FVector LastOutOfRangeLocationCheck;  // 0x0014, size 0xC
};
