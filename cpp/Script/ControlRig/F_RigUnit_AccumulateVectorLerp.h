// /Script/ControlRig.RigUnit_AccumulateVectorLerp
// size 0x48, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_Accumulate.h

USTRUCT()
struct FRigUnit_AccumulateVectorLerp : public FRigUnit_AccumulateBase
{
public:
    UPROPERTY() FVector TargetValue;  // 0x0008, size 0xC
    UPROPERTY() FVector InitialValue;  // 0x0014, size 0xC
    UPROPERTY() float Blend;  // 0x0020, size 0x4
    UPROPERTY() bool bIntegrateDeltaTime;  // 0x0024, size 0x1
    UPROPERTY() FVector Result;  // 0x0028, size 0xC
    UPROPERTY() FVector AccumulatedValue;  // 0x0034, size 0xC
    UPROPERTY() bool bIsInitialized;  // 0x0040, size 0x1
};
