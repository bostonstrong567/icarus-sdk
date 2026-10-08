// /Script/ControlRig.RigUnit_GetBoneTransform
// size 0x70, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_GetBoneTransform.h

USTRUCT()
struct FRigUnit_GetBoneTransform : public FRigUnit
{
    UPROPERTY() FName Bone;  // 0x0008, size 0x8
    UPROPERTY() EBoneGetterSetterMode Space;  // 0x0010, size 0x1
    UPROPERTY() FTransform Transform;  // 0x0020, size 0x30
    UPROPERTY(Transient) FCachedRigElement CachedBone;  // 0x0050, size 0x14
};
