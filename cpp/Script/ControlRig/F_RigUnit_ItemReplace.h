// /Script/ControlRig.RigUnit_ItemReplace
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_Item.h

USTRUCT()
struct FRigUnit_ItemReplace : public FRigUnit_ItemBase
{
public:
    UPROPERTY() FRigElementKey Item;  // 0x0008, size 0xC
    UPROPERTY() FName Old;  // 0x0014, size 0x8
    UPROPERTY() FName New;  // 0x001C, size 0x8
    UPROPERTY() FRigElementKey Result;  // 0x0024, size 0xC
};
