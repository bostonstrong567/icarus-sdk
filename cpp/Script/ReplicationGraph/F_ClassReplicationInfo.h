// /Script/ReplicationGraph.ClassReplicationInfo
// size 0x70, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraphTypes.h

USTRUCT()
struct FClassReplicationInfo
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() float DistancePriorityScale;  // 0x0000, size 0x4
    UPROPERTY() float StarvationPriorityScale;  // 0x0004, size 0x4
    UPROPERTY() float AccumulatedNetPriorityBias;  // 0x0008, size 0x4
    UPROPERTY() uint16 ReplicationPeriodFrame;  // 0x000C, size 0x2
    UPROPERTY() uint16 FastPath_ReplicationPeriodFrame;  // 0x000E, size 0x2
    UPROPERTY() uint16 ActorChannelFrameTimeout;  // 0x0010, size 0x2
    TFunction<bool __cdecl(AActor *)> FastSharedReplicationFunc;  // 0x0020, not reflected
    FName FastSharedReplicationFuncName;  // 0x0060, not reflected
private:
    UPROPERTY() float CullDistance;  // 0x0068, size 0x4
    UPROPERTY() float CullDistanceSquared;  // 0x006C, size 0x4
};
