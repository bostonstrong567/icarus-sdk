// /Script/ControlRig.RigUnit_AimItem
// size 0x150, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h

USTRUCT()
struct FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
{
public:
    UPROPERTY() FRigElementKey Item;  // 0x0068, size 0xC
    UPROPERTY() FRigUnit_AimItem_Target Primary;  // 0x0074, size 0x2C
    UPROPERTY() FRigUnit_AimItem_Target Secondary;  // 0x00A0, size 0x2C
    UPROPERTY() float Weight;  // 0x00CC, size 0x4
    UPROPERTY() FRigUnit_AimBone_DebugSettings DebugSettings;  // 0x00D0, size 0x40
    UPROPERTY() FCachedRigElement CachedItem;  // 0x0110, size 0x14
    UPROPERTY() FCachedRigElement PrimaryCachedSpace;  // 0x0124, size 0x14
    UPROPERTY() FCachedRigElement SecondaryCachedSpace;  // 0x0138, size 0x14
};
