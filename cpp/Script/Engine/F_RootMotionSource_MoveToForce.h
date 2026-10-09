// /Script/Engine.RootMotionSource_MoveToForce
// size 0xC0, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/RootMotionSource.h

USTRUCT()
struct FRootMotionSource_MoveToForce : public FRootMotionSource
{
public:
    UPROPERTY() FVector StartLocation;  // 0x0098, size 0xC
    UPROPERTY() FVector TargetLocation;  // 0x00A4, size 0xC
    UPROPERTY() bool bRestrictSpeedToExpected;  // 0x00B0, size 0x1
    UPROPERTY() UCurveVector* PathOffsetCurve;  // 0x00B8, size 0x8
};
