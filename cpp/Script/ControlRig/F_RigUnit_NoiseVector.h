// /Script/ControlRig.RigUnit_NoiseVector
// size 0x50, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_Noise.h

USTRUCT()
struct FRigUnit_NoiseVector : public FRigUnit_MathBase
{
public:
    UPROPERTY() FVector Position;  // 0x0008, size 0xC
    UPROPERTY() FVector Speed;  // 0x0014, size 0xC
    UPROPERTY() FVector Frequency;  // 0x0020, size 0xC
    UPROPERTY() float Minimum;  // 0x002C, size 0x4
    UPROPERTY() float Maximum;  // 0x0030, size 0x4
    UPROPERTY() FVector Result;  // 0x0034, size 0xC
    UPROPERTY() FVector Time;  // 0x0040, size 0xC
};
