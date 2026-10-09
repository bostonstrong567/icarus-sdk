// /Script/ControlRig.RigUnit_RandomVector
// size 0x38, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_Random.h

USTRUCT()
struct FRigUnit_RandomVector : public FRigUnit_MathBase
{
public:
    UPROPERTY() int32 Seed;  // 0x0008, size 0x4
    UPROPERTY() float Minimum;  // 0x000C, size 0x4
    UPROPERTY() float Maximum;  // 0x0010, size 0x4
    UPROPERTY() float Duration;  // 0x0014, size 0x4
    UPROPERTY() FVector Result;  // 0x0018, size 0xC
    UPROPERTY() FVector LastResult;  // 0x0024, size 0xC
    UPROPERTY() int32 LastSeed;  // 0x0030, size 0x4
    UPROPERTY() float TimeLeft;  // 0x0034, size 0x4
};
