// /Script/ControlRig.RigUnit_CollectionItemAtIndex
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_Collection.h

USTRUCT()
struct FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase
{
    UPROPERTY() FRigElementKeyCollection Collection;  // 0x0008, size 0x10
    UPROPERTY() int32 Index;  // 0x0018, size 0x4
    UPROPERTY() FRigElementKey Item;  // 0x001C, size 0xC
};
