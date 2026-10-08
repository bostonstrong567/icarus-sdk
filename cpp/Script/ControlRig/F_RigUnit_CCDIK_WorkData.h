// /Script/ControlRig.RigUnit_CCDIK_WorkData
// size 0x58, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h

USTRUCT()
struct FRigUnit_CCDIK_WorkData
{
    UPROPERTY() TArray<FCCDIKChainLink> Chain;  // 0x0000, size 0x10
    UPROPERTY() TArray<FCachedRigElement> CachedItems;  // 0x0010, size 0x10
    UPROPERTY() TArray<int32> RotationLimitIndex;  // 0x0020, size 0x10
    UPROPERTY() TArray<float> RotationLimitsPerItem;  // 0x0030, size 0x10
    UPROPERTY() FCachedRigElement CachedEffector;  // 0x0040, size 0x14
};
