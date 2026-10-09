// /Script/ControlRig.RigUnit_CollectionReplaceItems
// size 0x58, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_Collection.h

USTRUCT()
struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
{
public:
    UPROPERTY() FRigElementKeyCollection Items;  // 0x0008, size 0x10
    UPROPERTY() FName Old;  // 0x0018, size 0x8
    UPROPERTY() FName New;  // 0x0020, size 0x8
    UPROPERTY() bool RemoveInvalidItems;  // 0x0028, size 0x1
    UPROPERTY() FRigElementKeyCollection Collection;  // 0x0030, size 0x10
    UPROPERTY() FRigElementKeyCollection CachedCollection;  // 0x0040, size 0x10
    UPROPERTY() int32 CachedHierarchyHash;  // 0x0050, size 0x4
};
