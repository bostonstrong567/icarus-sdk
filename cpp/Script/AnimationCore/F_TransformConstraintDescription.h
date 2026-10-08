// /Script/AnimationCore.TransformConstraintDescription
// size 0x18, declared in Engine/Source/Runtime/AnimationCore/Public/Constraint.h

USTRUCT()
struct FTransformConstraintDescription : public FConstraintDescriptionEx
{
    UPROPERTY(EditAnywhere) ETransformConstraintType TransformType;  // 0x0010, size 0x1
};
