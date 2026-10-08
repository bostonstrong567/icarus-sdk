// /Script/ControlRig.RigUnit_SetRelativeBoneTransform
// size 0xE0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetRelativeBoneTransform.h

USTRUCT()
struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
{
    UPROPERTY() FName Bone;  // 0x0068, size 0x8
    UPROPERTY() FName Space;  // 0x0070, size 0x8
    UPROPERTY() FTransform Transform;  // 0x0080, size 0x30
    UPROPERTY() float Weight;  // 0x00B0, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x00B4, size 0x1
    UPROPERTY(Transient) FCachedRigElement CachedBone;  // 0x00B8, size 0x14
    UPROPERTY(Transient) FCachedRigElement CachedSpaceIndex;  // 0x00CC, size 0x14
};
