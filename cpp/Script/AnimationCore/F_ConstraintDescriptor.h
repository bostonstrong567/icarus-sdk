// /Script/AnimationCore.ConstraintDescriptor
// size 0x10, declared in Engine/Source/Runtime/AnimationCore/Public/Constraint.h

USTRUCT()
struct FConstraintDescriptor
{
public:
    UPROPERTY() EConstraintType Type;  // 0x0000, size 0x1
    FConstraintDescriptionEx * ConstraintDescription;  // 0x0008, not reflected
};
