// /Script/ControlRig.RigUnit_ItemExists
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_Item.h

USTRUCT()
struct FRigUnit_ItemExists : public FRigUnit_ItemBase
{
public:
    UPROPERTY() FRigElementKey Item;  // 0x0008, size 0xC
    UPROPERTY() bool Exists;  // 0x0014, size 0x1
    UPROPERTY() FCachedRigElement CachedIndex;  // 0x0018, size 0x14
};
