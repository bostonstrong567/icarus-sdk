// /Script/Engine.RootMotionSource_MoveToDynamicForce
// size 0xD0, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/RootMotionSource.h

USTRUCT()
struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource
{
    UPROPERTY() FVector StartLocation;  // 0x0098, size 0xC
    UPROPERTY() FVector InitialTargetLocation;  // 0x00A4, size 0xC
    UPROPERTY() FVector TargetLocation;  // 0x00B0, size 0xC
    UPROPERTY() bool bRestrictSpeedToExpected;  // 0x00BC, size 0x1
    UPROPERTY() UCurveVector* PathOffsetCurve;  // 0x00C0, size 0x8
    UPROPERTY() UCurveFloat* TimeMappingCurve;  // 0x00C8, size 0x8
};
