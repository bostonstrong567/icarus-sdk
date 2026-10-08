// /Script/ControlRig.RigUnit_OffsetTransformForItem
// size 0xD0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_OffsetTransform.h

USTRUCT()
struct FRigUnit_OffsetTransformForItem : public FRigUnitMutable
{
    UPROPERTY() FRigElementKey Item;  // 0x0068, size 0xC
    UPROPERTY() FTransform OffsetTransform;  // 0x0080, size 0x30
    UPROPERTY() float Weight;  // 0x00B0, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x00B4, size 0x1
    UPROPERTY() FCachedRigElement CachedIndex;  // 0x00B8, size 0x14
};
