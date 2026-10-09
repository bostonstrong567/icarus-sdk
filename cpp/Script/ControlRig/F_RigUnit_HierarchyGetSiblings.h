// /Script/ControlRig.RigUnit_HierarchyGetSiblings
// size 0x50, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_Hierarchy.h

USTRUCT()
struct FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
{
public:
    UPROPERTY() FRigElementKey Item;  // 0x0008, size 0xC
    UPROPERTY() bool bIncludeItem;  // 0x0014, size 0x1
    UPROPERTY() FRigElementKeyCollection Siblings;  // 0x0018, size 0x10
    UPROPERTY() FCachedRigElement CachedItem;  // 0x0028, size 0x14
    UPROPERTY() FRigElementKeyCollection CachedSiblings;  // 0x0040, size 0x10
};
