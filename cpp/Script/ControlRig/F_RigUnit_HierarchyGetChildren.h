// /Script/ControlRig.RigUnit_HierarchyGetChildren
// size 0x50, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_Hierarchy.h

USTRUCT()
struct FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
{
    UPROPERTY() FRigElementKey Parent;  // 0x0008, size 0xC
    UPROPERTY() bool bIncludeParent;  // 0x0014, size 0x1
    UPROPERTY() bool bRecursive;  // 0x0015, size 0x1
    UPROPERTY() FRigElementKeyCollection Children;  // 0x0018, size 0x10
    UPROPERTY() FCachedRigElement CachedParent;  // 0x0028, size 0x14
    UPROPERTY() FRigElementKeyCollection CachedChildren;  // 0x0040, size 0x10
};
