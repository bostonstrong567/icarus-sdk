// /Script/ControlRig.RigUnit_SetTransform
// size 0xD0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Units/Hierarchy/RigUnit_SetTransform.h

USTRUCT()
struct FRigUnit_SetTransform : public FRigUnitMutable
{
public:
    UPROPERTY() FRigElementKey Item;  // 0x0068, size 0xC
    UPROPERTY() EBoneGetterSetterMode Space;  // 0x0074, size 0x1
    UPROPERTY() bool bInitial;  // 0x0075, size 0x1
    UPROPERTY() FTransform Transform;  // 0x0080, size 0x30
    UPROPERTY() float Weight;  // 0x00B0, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x00B4, size 0x1
    UPROPERTY() FCachedRigElement CachedIndex;  // 0x00B8, size 0x14
};
