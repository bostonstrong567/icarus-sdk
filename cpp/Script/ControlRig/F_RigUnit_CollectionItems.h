// /Script/ControlRig.RigUnit_CollectionItems
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_Collection.h

USTRUCT()
struct FRigUnit_CollectionItems : public FRigUnit_CollectionBase
{
    UPROPERTY() TArray<FRigElementKey> Items;  // 0x0008, size 0x10
    UPROPERTY() FRigElementKeyCollection Collection;  // 0x0018, size 0x10
};
