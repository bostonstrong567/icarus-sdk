// /Script/ControlRig.RigUnit_AccumulateFloatAdd
// size 0x20, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_Accumulate.h

USTRUCT()
struct FRigUnit_AccumulateFloatAdd : public FRigUnit_AccumulateBase
{
public:
    UPROPERTY() float Increment;  // 0x0008, size 0x4
    UPROPERTY() float InitialValue;  // 0x000C, size 0x4
    UPROPERTY() bool bIntegrateDeltaTime;  // 0x0010, size 0x1
    UPROPERTY() float Result;  // 0x0014, size 0x4
    UPROPERTY() float AccumulatedValue;  // 0x0018, size 0x4
};
