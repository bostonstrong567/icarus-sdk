// /Script/ControlRig.RigUnit_AccumulateQuatLerp
// size 0x70, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_Accumulate.h

USTRUCT()
struct FRigUnit_AccumulateQuatLerp : public FRigUnit_AccumulateBase
{
    UPROPERTY() FQuat TargetValue;  // 0x0010, size 0x10
    UPROPERTY() FQuat InitialValue;  // 0x0020, size 0x10
    UPROPERTY() float Blend;  // 0x0030, size 0x4
    UPROPERTY() bool bIntegrateDeltaTime;  // 0x0034, size 0x1
    UPROPERTY() FQuat Result;  // 0x0040, size 0x10
    UPROPERTY() FQuat AccumulatedValue;  // 0x0050, size 0x10
    UPROPERTY() bool bIsInitialized;  // 0x0060, size 0x1
};
