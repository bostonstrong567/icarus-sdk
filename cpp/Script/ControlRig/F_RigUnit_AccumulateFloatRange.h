// /Script/ControlRig.RigUnit_AccumulateFloatRange
// size 0x20, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_Accumulate.h

USTRUCT()
struct FRigUnit_AccumulateFloatRange : public FRigUnit_AccumulateBase
{
public:
    UPROPERTY() float Value;  // 0x0008, size 0x4
    UPROPERTY() float Minimum;  // 0x000C, size 0x4
    UPROPERTY() float Maximum;  // 0x0010, size 0x4
    UPROPERTY() float AccumulatedMinimum;  // 0x0014, size 0x4
    UPROPERTY() float AccumulatedMaximum;  // 0x0018, size 0x4
};
