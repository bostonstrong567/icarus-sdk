// /Script/ControlRig.RigUnit_SetRotation
// size 0xB0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Units/Hierarchy/RigUnit_SetTransform.h

USTRUCT()
struct FRigUnit_SetRotation : public FRigUnitMutable
{
    UPROPERTY() FRigElementKey Item;  // 0x0068, size 0xC
    UPROPERTY() EBoneGetterSetterMode Space;  // 0x0074, size 0x1
    UPROPERTY() FQuat Rotation;  // 0x0080, size 0x10
    UPROPERTY() float Weight;  // 0x0090, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x0094, size 0x1
    UPROPERTY() FCachedRigElement CachedIndex;  // 0x0098, size 0x14
};
