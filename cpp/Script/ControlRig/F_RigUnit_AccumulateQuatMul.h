// /Script/ControlRig.RigUnit_AccumulateQuatMul
// size 0x60, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_Accumulate.h

USTRUCT()
struct FRigUnit_AccumulateQuatMul : public FRigUnit_AccumulateBase
{
public:
    UPROPERTY() FQuat Multiplier;  // 0x0010, size 0x10
    UPROPERTY() FQuat InitialValue;  // 0x0020, size 0x10
    UPROPERTY() bool bFlipOrder;  // 0x0030, size 0x1
    UPROPERTY() bool bIntegrateDeltaTime;  // 0x0031, size 0x1
    UPROPERTY() FQuat Result;  // 0x0040, size 0x10
    UPROPERTY() FQuat AccumulatedValue;  // 0x0050, size 0x10
};
