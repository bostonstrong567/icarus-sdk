// /Script/ControlRig.RigUnit_CollectionNameSearch
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_Collection.h

USTRUCT()
struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
{
    UPROPERTY() FName PartialName;  // 0x0008, size 0x8
    UPROPERTY() ERigElementType TypeToSearch;  // 0x0010, size 0x1
    UPROPERTY() FRigElementKeyCollection Collection;  // 0x0018, size 0x10
    UPROPERTY() FRigElementKeyCollection CachedCollection;  // 0x0028, size 0x10
    UPROPERTY() int32 CachedHierarchyHash;  // 0x0038, size 0x4
};
