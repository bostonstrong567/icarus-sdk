// /Script/ControlRig.RigUnit_TransformConstraint
// size 0x130, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h

USTRUCT()
struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
{
    UPROPERTY(EditAnywhere) FName Bone;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere) ETransformSpaceMode BaseTransformSpace;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere) FTransform BaseTransform;  // 0x0080, size 0x30
    UPROPERTY(EditAnywhere) FName BaseBone;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere) TArray<FConstraintTarget> Targets;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere) bool bUseInitialTransforms;  // 0x00C8, size 0x1
    UPROPERTY(Transient) FRigUnit_TransformConstraint_WorkData WorkData;  // 0x00D0, size 0x60
};
