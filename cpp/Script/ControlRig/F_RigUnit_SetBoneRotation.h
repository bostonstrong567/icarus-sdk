// /Script/ControlRig.RigUnit_SetBoneRotation
// size 0xA0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetBoneRotation.h

USTRUCT()
struct FRigUnit_SetBoneRotation : public FRigUnitMutable
{
public:
    UPROPERTY() FName Bone;  // 0x0068, size 0x8
    UPROPERTY() FQuat Rotation;  // 0x0070, size 0x10
    UPROPERTY() EBoneGetterSetterMode Space;  // 0x0080, size 0x1
    UPROPERTY() float Weight;  // 0x0084, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x0088, size 0x1
    UPROPERTY(Transient) FCachedRigElement CachedBone;  // 0x008C, size 0x14
};
