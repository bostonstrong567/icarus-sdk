// /Script/ControlRig.RigUnit_CollectionLoop
// size 0xF8, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_Collection.h

USTRUCT()
struct FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
{
    UPROPERTY() FRigElementKeyCollection Collection;  // 0x0068, size 0x10
    UPROPERTY() FRigElementKey Item;  // 0x0078, size 0xC
    UPROPERTY() int32 Index;  // 0x0084, size 0x4
    UPROPERTY() int32 Count;  // 0x0088, size 0x4
    UPROPERTY() float Ratio;  // 0x008C, size 0x4
    UPROPERTY() bool Continue;  // 0x0090, size 0x1
    UPROPERTY() FControlRigExecuteContext Completed;  // 0x0098, size 0x60
};
