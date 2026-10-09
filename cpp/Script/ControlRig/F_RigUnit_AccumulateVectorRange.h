// /Script/ControlRig.RigUnit_AccumulateVectorRange
// size 0x48, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_Accumulate.h

USTRUCT()
struct FRigUnit_AccumulateVectorRange : public FRigUnit_AccumulateBase
{
public:
    UPROPERTY() FVector Value;  // 0x0008, size 0xC
    UPROPERTY() FVector Minimum;  // 0x0014, size 0xC
    UPROPERTY() FVector Maximum;  // 0x0020, size 0xC
    UPROPERTY() FVector AccumulatedMinimum;  // 0x002C, size 0xC
    UPROPERTY() FVector AccumulatedMaximum;  // 0x0038, size 0xC
};
