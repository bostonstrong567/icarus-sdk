// /Script/Engine.RootMotionSource
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/RootMotionSource.h

USTRUCT()
struct FRootMotionSource
{
public:
    UPROPERTY() uint16 Priority;  // 0x0010, size 0x2
    UPROPERTY() uint16 LocalID;  // 0x0012, size 0x2
    UPROPERTY() ERootMotionAccumulateMode AccumulateMode;  // 0x0014, size 0x1
    UPROPERTY() FName InstanceName;  // 0x0018, size 0x8
    UPROPERTY() float StartTime;  // 0x0020, size 0x4
    UPROPERTY() float CurrentTime;  // 0x0024, size 0x4
    UPROPERTY() float PreviousTime;  // 0x0028, size 0x4
    UPROPERTY() float Duration;  // 0x002C, size 0x4
    UPROPERTY() FRootMotionSourceStatus Status;  // 0x0030, size 0x1
    UPROPERTY() FRootMotionSourceSettings Settings;  // 0x0031, size 0x1
    UPROPERTY() bool bInLocalSpace;  // 0x0032, size 0x1
    bool bNeedsSimulatedCatchup;  // 0x0033, not reflected
    bool bSimulatedNeedsSmoothing;  // 0x0034, not reflected
    UPROPERTY() FRootMotionMovementParams RootMotionParams;  // 0x0040, size 0x40
    UPROPERTY() FRootMotionFinishVelocitySettings FinishVelocityParams;  // 0x0080, size 0x14
};
