// /Script/ControlRig.RigUnit_NoiseFloat
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_Noise.h

USTRUCT()
struct FRigUnit_NoiseFloat : public FRigUnit_MathBase
{
public:
    UPROPERTY() float Value;  // 0x0008, size 0x4
    UPROPERTY() float Speed;  // 0x000C, size 0x4
    UPROPERTY() float Frequency;  // 0x0010, size 0x4
    UPROPERTY() float Minimum;  // 0x0014, size 0x4
    UPROPERTY() float Maximum;  // 0x0018, size 0x4
    UPROPERTY() float Result;  // 0x001C, size 0x4
    UPROPERTY() float Time;  // 0x0020, size 0x4
};
