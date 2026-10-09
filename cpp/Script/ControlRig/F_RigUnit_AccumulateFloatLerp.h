// /Script/ControlRig.RigUnit_AccumulateFloatLerp
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_Accumulate.h

USTRUCT()
struct FRigUnit_AccumulateFloatLerp : public FRigUnit_AccumulateBase
{
public:
    UPROPERTY() float TargetValue;  // 0x0008, size 0x4
    UPROPERTY() float InitialValue;  // 0x000C, size 0x4
    UPROPERTY() float Blend;  // 0x0010, size 0x4
    UPROPERTY() bool bIntegrateDeltaTime;  // 0x0014, size 0x1
    UPROPERTY() float Result;  // 0x0018, size 0x4
    UPROPERTY() float AccumulatedValue;  // 0x001C, size 0x4
    UPROPERTY() bool bIsInitialized;  // 0x0020, size 0x1
};
