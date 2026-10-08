// /Script/AnimationCore.ConstraintDescriptor
// size 0x10, declared in Engine/Source/Runtime/AnimationCore/Public/Constraint.h

USTRUCT()
struct FConstraintDescriptor
{
    UPROPERTY() EConstraintType Type;  // 0x0000, size 0x1

    // Not reflected:
    FConstraintDescriptionEx * ConstraintDescription;  // 0x0008
};
