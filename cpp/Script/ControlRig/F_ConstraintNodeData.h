// /Script/ControlRig.ConstraintNodeData
// size 0xB0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/AnimationHierarchy.h

USTRUCT()
struct FConstraintNodeData
{
    UPROPERTY() FTransform RelativeParent;  // 0x0000, size 0x30
    UPROPERTY() FConstraintOffset ConstraintOffset;  // 0x0030, size 0x60
    UPROPERTY() FName LinkedNode;  // 0x0090, size 0x8
    UPROPERTY() TArray<FTransformConstraint> Constraints;  // 0x0098, size 0x10
};
