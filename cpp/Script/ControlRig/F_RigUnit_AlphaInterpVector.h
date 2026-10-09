// /Script/ControlRig.RigUnit_AlphaInterpVector
// size 0x88, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_AlphaInterp.h

USTRUCT()
struct FRigUnit_AlphaInterpVector : public FRigUnit_SimBase
{
public:
    UPROPERTY() FVector Value;  // 0x0008, size 0xC
    UPROPERTY() float Scale;  // 0x0014, size 0x4
    UPROPERTY() float Bias;  // 0x0018, size 0x4
    UPROPERTY() bool bMapRange;  // 0x001C, size 0x1
    UPROPERTY() FInputRange InRange;  // 0x0020, size 0x8
    UPROPERTY() FInputRange OutRange;  // 0x0028, size 0x8
    UPROPERTY() bool bClampResult;  // 0x0030, size 0x1
    UPROPERTY() float ClampMin;  // 0x0034, size 0x4
    UPROPERTY() float ClampMax;  // 0x0038, size 0x4
    UPROPERTY() bool bInterpResult;  // 0x003C, size 0x1
    UPROPERTY() float InterpSpeedIncreasing;  // 0x0040, size 0x4
    UPROPERTY() float InterpSpeedDecreasing;  // 0x0044, size 0x4
    UPROPERTY() FVector Result;  // 0x0048, size 0xC
    UPROPERTY() FInputScaleBiasClamp ScaleBiasClamp;  // 0x0054, size 0x30
};
