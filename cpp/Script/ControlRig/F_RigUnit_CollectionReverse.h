// /Script/ControlRig.RigUnit_CollectionReverse
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_Collection.h

USTRUCT()
struct FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
{
public:
    UPROPERTY() FRigElementKeyCollection Collection;  // 0x0008, size 0x10
    UPROPERTY() FRigElementKeyCollection Reversed;  // 0x0018, size 0x10
};
