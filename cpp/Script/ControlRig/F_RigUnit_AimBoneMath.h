// /Script/ControlRig.RigUnit_AimBoneMath
// size 0x140, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h

USTRUCT()
struct FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
{
public:
    UPROPERTY() FTransform InputTransform;  // 0x0010, size 0x30
    UPROPERTY() FRigUnit_AimItem_Target Primary;  // 0x0040, size 0x2C
    UPROPERTY() FRigUnit_AimItem_Target Secondary;  // 0x006C, size 0x2C
    UPROPERTY() float Weight;  // 0x0098, size 0x4
    UPROPERTY() FTransform Result;  // 0x00A0, size 0x30
    UPROPERTY() FRigUnit_AimBone_DebugSettings DebugSettings;  // 0x00D0, size 0x40
    UPROPERTY() FCachedRigElement PrimaryCachedSpace;  // 0x0110, size 0x14
    UPROPERTY() FCachedRigElement SecondaryCachedSpace;  // 0x0124, size 0x14
};
