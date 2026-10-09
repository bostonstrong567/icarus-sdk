// /Script/ControlRig.RigUnit_HierarchyGetParents
// size 0x50, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_Hierarchy.h

USTRUCT()
struct FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
{
public:
    UPROPERTY() FRigElementKey Child;  // 0x0008, size 0xC
    UPROPERTY() bool bIncludeChild;  // 0x0014, size 0x1
    UPROPERTY() bool bReverse;  // 0x0015, size 0x1
    UPROPERTY() FRigElementKeyCollection Parents;  // 0x0018, size 0x10
    UPROPERTY() FCachedRigElement CachedChild;  // 0x0028, size 0x14
    UPROPERTY() FRigElementKeyCollection CachedParents;  // 0x0040, size 0x10
};
