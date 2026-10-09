// /Script/ControlRig.RigUnit_SetBoneTransform
// size 0xF0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetBoneTransform.h

USTRUCT()
struct FRigUnit_SetBoneTransform : public FRigUnitMutable
{
public:
    UPROPERTY() FName Bone;  // 0x0068, size 0x8
    UPROPERTY() FTransform Transform;  // 0x0070, size 0x30
    UPROPERTY() FTransform Result;  // 0x00A0, size 0x30
    UPROPERTY() EBoneGetterSetterMode Space;  // 0x00D0, size 0x1
    UPROPERTY() float Weight;  // 0x00D4, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x00D8, size 0x1
    UPROPERTY(Transient) FCachedRigElement CachedBone;  // 0x00DC, size 0x14
};
