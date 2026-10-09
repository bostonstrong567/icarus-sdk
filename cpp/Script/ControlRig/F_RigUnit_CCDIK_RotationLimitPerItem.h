// /Script/ControlRig.RigUnit_CCDIK_RotationLimitPerItem
// size 0x10, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h

USTRUCT()
struct FRigUnit_CCDIK_RotationLimitPerItem
{
public:
    UPROPERTY() FRigElementKey Item;  // 0x0000, size 0xC
    UPROPERTY() float Limit;  // 0x000C, size 0x4
};
