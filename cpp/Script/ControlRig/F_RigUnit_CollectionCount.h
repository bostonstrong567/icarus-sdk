// /Script/ControlRig.RigUnit_CollectionCount
// size 0x20, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_Collection.h

USTRUCT()
struct FRigUnit_CollectionCount : public FRigUnit_CollectionBase
{
public:
    UPROPERTY() FRigElementKeyCollection Collection;  // 0x0008, size 0x10
    UPROPERTY() int32 Count;  // 0x0018, size 0x4
};
