// /Script/ControlRig.RigUnit_AccumulateTransformMul
// size 0xE0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_Accumulate.h

USTRUCT()
struct FRigUnit_AccumulateTransformMul : public FRigUnit_AccumulateBase
{
    UPROPERTY() FTransform Multiplier;  // 0x0010, size 0x30
    UPROPERTY() FTransform InitialValue;  // 0x0040, size 0x30
    UPROPERTY() bool bFlipOrder;  // 0x0070, size 0x1
    UPROPERTY() bool bIntegrateDeltaTime;  // 0x0071, size 0x1
    UPROPERTY() FTransform Result;  // 0x0080, size 0x30
    UPROPERTY() FTransform AccumulatedValue;  // 0x00B0, size 0x30
};
