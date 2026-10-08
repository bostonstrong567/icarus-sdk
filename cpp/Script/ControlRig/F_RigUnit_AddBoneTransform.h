// /Script/ControlRig.RigUnit_AddBoneTransform
// size 0xC0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Units/Hierarchy/RigUnit_AddBoneTransform.h

USTRUCT()
struct FRigUnit_AddBoneTransform : public FRigUnitMutable
{
    UPROPERTY() FName Bone;  // 0x0068, size 0x8
    UPROPERTY() FTransform Transform;  // 0x0070, size 0x30
    UPROPERTY() float Weight;  // 0x00A0, size 0x4
    UPROPERTY() bool bPostMultiply;  // 0x00A4, size 0x1
    UPROPERTY() bool bPropagateToChildren;  // 0x00A5, size 0x1
    UPROPERTY(Transient) FCachedRigElement CachedBone;  // 0x00A8, size 0x14
};
