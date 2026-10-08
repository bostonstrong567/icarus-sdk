// /Script/ControlRig.ConstraintTarget
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h

USTRUCT()
struct FConstraintTarget
{
    UPROPERTY(EditAnywhere) FTransform Transform;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere) float Weight;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) bool bMaintainOffset;  // 0x0034, size 0x1
    UPROPERTY(EditAnywhere) FTransformFilter Filter;  // 0x0035, size 0x9
};
