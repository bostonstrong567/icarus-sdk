// /Script/ControlRig.RigUnit_CollectionChain
// size 0x50, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_Collection.h

USTRUCT()
struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase
{
    UPROPERTY() FRigElementKey FirstItem;  // 0x0008, size 0xC
    UPROPERTY() FRigElementKey LastItem;  // 0x0014, size 0xC
    UPROPERTY() bool Reverse;  // 0x0020, size 0x1
    UPROPERTY() FRigElementKeyCollection Collection;  // 0x0028, size 0x10
    UPROPERTY() FRigElementKeyCollection CachedCollection;  // 0x0038, size 0x10
    UPROPERTY() int32 CachedHierarchyHash;  // 0x0048, size 0x4
};
