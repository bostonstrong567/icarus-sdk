// /Script/AnimationCore.ConstraintOffset
// size 0x60, declared in Engine/Source/Runtime/AnimationCore/Public/Constraint.h

USTRUCT()
struct FConstraintOffset
{
    UPROPERTY() FVector Translation;  // 0x0000, size 0xC
    UPROPERTY() FQuat Rotation;  // 0x0010, size 0x10
    UPROPERTY() FVector Scale;  // 0x0020, size 0xC
    UPROPERTY() FTransform Parent;  // 0x0030, size 0x30
};
