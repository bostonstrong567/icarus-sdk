// /Script/ControlRig.RigUnit_AccumulateTransformLerp
// size 0xF0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_Accumulate.h

USTRUCT()
struct FRigUnit_AccumulateTransformLerp : public FRigUnit_AccumulateBase
{
    UPROPERTY() FTransform TargetValue;  // 0x0010, size 0x30
    UPROPERTY() FTransform InitialValue;  // 0x0040, size 0x30
    UPROPERTY() float Blend;  // 0x0070, size 0x4
    UPROPERTY() bool bIntegrateDeltaTime;  // 0x0074, size 0x1
    UPROPERTY() FTransform Result;  // 0x0080, size 0x30
    UPROPERTY() FTransform AccumulatedValue;  // 0x00B0, size 0x30
    UPROPERTY() bool bIsInitialized;  // 0x00E0, size 0x1
};
