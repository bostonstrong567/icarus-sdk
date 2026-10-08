// /Script/ControlRig.RigUnit_RandomFloat
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_Random.h

USTRUCT()
struct FRigUnit_RandomFloat : public FRigUnit_MathBase
{
    UPROPERTY() int32 Seed;  // 0x0008, size 0x4
    UPROPERTY() float Minimum;  // 0x000C, size 0x4
    UPROPERTY() float Maximum;  // 0x0010, size 0x4
    UPROPERTY() float Duration;  // 0x0014, size 0x4
    UPROPERTY() float Result;  // 0x0018, size 0x4
    UPROPERTY() float LastResult;  // 0x001C, size 0x4
    UPROPERTY() int32 LastSeed;  // 0x0020, size 0x4
    UPROPERTY() float TimeLeft;  // 0x0024, size 0x4
};
