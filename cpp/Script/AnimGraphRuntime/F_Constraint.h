// /Script/AnimGraphRuntime.Constraint
// size 0x1C, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_Constraint.h

USTRUCT()
struct FConstraint
{
    UPROPERTY(EditAnywhere) FBoneReference TargetBone;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) EConstraintOffsetOption OffsetOption;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere) ETransformConstraintType TransformType;  // 0x0011, size 0x1
    UPROPERTY(EditAnywhere) FFilterOptionPerAxis PerAxis;  // 0x0012, size 0x3

    // Not reflected:
    int32 ConstraintDataIndex;  // 0x0018
};
