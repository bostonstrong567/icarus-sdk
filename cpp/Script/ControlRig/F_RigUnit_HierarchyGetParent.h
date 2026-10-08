// /Script/ControlRig.RigUnit_HierarchyGetParent
// size 0x48, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_Hierarchy.h

USTRUCT()
struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase
{
    UPROPERTY() FRigElementKey Child;  // 0x0008, size 0xC
    UPROPERTY() FRigElementKey Parent;  // 0x0014, size 0xC
    UPROPERTY() FCachedRigElement CachedChild;  // 0x0020, size 0x14
    UPROPERTY() FCachedRigElement CachedParent;  // 0x0034, size 0x14
};
