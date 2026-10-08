// /Script/ControlRig.RigUnit_AccumulateVectorMul
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_Accumulate.h

USTRUCT()
struct FRigUnit_AccumulateVectorMul : public FRigUnit_AccumulateBase
{
    UPROPERTY() FVector Multiplier;  // 0x0008, size 0xC
    UPROPERTY() FVector InitialValue;  // 0x0014, size 0xC
    UPROPERTY() bool bIntegrateDeltaTime;  // 0x0020, size 0x1
    UPROPERTY() FVector Result;  // 0x0024, size 0xC
    UPROPERTY() FVector AccumulatedValue;  // 0x0030, size 0xC
};
