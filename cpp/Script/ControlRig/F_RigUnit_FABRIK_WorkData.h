// /Script/ControlRig.RigUnit_FABRIK_WorkData
// size 0x38, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h

USTRUCT()
struct FRigUnit_FABRIK_WorkData
{
public:
    UPROPERTY() TArray<FFABRIKChainLink> Chain;  // 0x0000, size 0x10
    UPROPERTY() TArray<FCachedRigElement> CachedItems;  // 0x0010, size 0x10
    UPROPERTY() FCachedRigElement CachedEffector;  // 0x0020, size 0x14
};
