// /Script/ControlRig.RigUnit_AimBone
// size 0x150, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h

USTRUCT()
struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
{
    UPROPERTY() FName Bone;  // 0x0068, size 0x8
    UPROPERTY() FRigUnit_AimBone_Target Primary;  // 0x0070, size 0x28
    UPROPERTY() FRigUnit_AimBone_Target Secondary;  // 0x0098, size 0x28
    UPROPERTY() float Weight;  // 0x00C0, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x00C4, size 0x1
    UPROPERTY() FRigUnit_AimBone_DebugSettings DebugSettings;  // 0x00D0, size 0x40
    UPROPERTY() FCachedRigElement CachedBoneIndex;  // 0x0110, size 0x14
    UPROPERTY() FCachedRigElement PrimaryCachedSpace;  // 0x0124, size 0x14
    UPROPERTY() FCachedRigElement SecondaryCachedSpace;  // 0x0138, size 0x14
};
