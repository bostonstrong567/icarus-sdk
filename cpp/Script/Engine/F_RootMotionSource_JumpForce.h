// /Script/Engine.RootMotionSource_JumpForce
// size 0xD0, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/RootMotionSource.h

USTRUCT()
struct FRootMotionSource_JumpForce : public FRootMotionSource
{
public:
    UPROPERTY() FRotator Rotation;  // 0x0098, size 0xC
    UPROPERTY() float Distance;  // 0x00A4, size 0x4
    UPROPERTY() float Height;  // 0x00A8, size 0x4
    UPROPERTY() bool bDisableTimeout;  // 0x00AC, size 0x1
    UPROPERTY() UCurveVector* PathOffsetCurve;  // 0x00B0, size 0x8
    UPROPERTY() UCurveFloat* TimeMappingCurve;  // 0x00B8, size 0x8
    FVector SavedHalfwayLocation;  // 0x00C0, not reflected
};
