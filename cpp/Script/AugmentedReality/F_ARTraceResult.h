// /Script/AugmentedReality.ARTraceResult
// size 0x60, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTraceResult.h

USTRUCT()
struct FARTraceResult
{
    UPROPERTY() float DistanceFromCamera;  // 0x0000, size 0x4
    UPROPERTY() EARLineTraceChannels TraceChannel;  // 0x0004, size 0x1
    UPROPERTY() FTransform LocalTransform;  // 0x0010, size 0x30
    UPROPERTY() UARTrackedGeometry* TrackedGeometry;  // 0x0040, size 0x8

    // Not reflected:
    TSharedPtr<FARSupportInterface,1> ARSystem;  // 0x0048
};
