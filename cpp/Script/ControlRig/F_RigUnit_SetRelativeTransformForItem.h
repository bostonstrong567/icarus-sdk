// /Script/ControlRig.RigUnit_SetRelativeTransformForItem
// size 0xF0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h

USTRUCT()
struct FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
{
    UPROPERTY() FRigElementKey Child;  // 0x0068, size 0xC
    UPROPERTY() FRigElementKey Parent;  // 0x0074, size 0xC
    UPROPERTY() bool bParentInitial;  // 0x0080, size 0x1
    UPROPERTY() FTransform RelativeTransform;  // 0x0090, size 0x30
    UPROPERTY() float Weight;  // 0x00C0, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x00C4, size 0x1
    UPROPERTY() FCachedRigElement CachedChild;  // 0x00C8, size 0x14
    UPROPERTY() FCachedRigElement CachedParent;  // 0x00DC, size 0x14
};
