// /Script/ControlRig.RigUnit_CollectionChildren
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_Collection.h

USTRUCT()
struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
{
public:
    UPROPERTY() FRigElementKey Parent;  // 0x0008, size 0xC
    UPROPERTY() bool bIncludeParent;  // 0x0014, size 0x1
    UPROPERTY() bool bRecursive;  // 0x0015, size 0x1
    UPROPERTY() ERigElementType TypeToSearch;  // 0x0016, size 0x1
    UPROPERTY() FRigElementKeyCollection Collection;  // 0x0018, size 0x10
    UPROPERTY() FRigElementKeyCollection CachedCollection;  // 0x0028, size 0x10
    UPROPERTY() int32 CachedHierarchyHash;  // 0x0038, size 0x4
};
