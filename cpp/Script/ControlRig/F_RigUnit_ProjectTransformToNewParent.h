// /Script/ControlRig.RigUnit_ProjectTransformToNewParent
// size 0xB0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_ProjectTransformToNewParent.h

USTRUCT()
struct FRigUnit_ProjectTransformToNewParent : public FRigUnit
{
    UPROPERTY() FRigElementKey Child;  // 0x0008, size 0xC
    UPROPERTY() bool bChildInitial;  // 0x0014, size 0x1
    UPROPERTY() FRigElementKey OldParent;  // 0x0018, size 0xC
    UPROPERTY() bool bOldParentInitial;  // 0x0024, size 0x1
    UPROPERTY() FRigElementKey NewParent;  // 0x0028, size 0xC
    UPROPERTY() bool bNewParentInitial;  // 0x0034, size 0x1
    UPROPERTY() FTransform Transform;  // 0x0040, size 0x30
    UPROPERTY() FCachedRigElement CachedChild;  // 0x0070, size 0x14
    UPROPERTY() FCachedRigElement CachedOldParent;  // 0x0084, size 0x14
    UPROPERTY() FCachedRigElement CachedNewParent;  // 0x0098, size 0x14
};
