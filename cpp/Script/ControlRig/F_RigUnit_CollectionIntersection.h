// /Script/ControlRig.RigUnit_CollectionIntersection
// size 0x38, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_Collection.h

USTRUCT()
struct FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase
{
    UPROPERTY() FRigElementKeyCollection A;  // 0x0008, size 0x10
    UPROPERTY() FRigElementKeyCollection B;  // 0x0018, size 0x10
    UPROPERTY() FRigElementKeyCollection Collection;  // 0x0028, size 0x10
};
