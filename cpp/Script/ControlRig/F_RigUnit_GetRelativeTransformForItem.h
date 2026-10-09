// /Script/ControlRig.RigUnit_GetRelativeTransformForItem
// size 0x90, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_GetRelativeTransform.h

USTRUCT()
struct FRigUnit_GetRelativeTransformForItem : public FRigUnit
{
public:
    UPROPERTY() FRigElementKey Child;  // 0x0008, size 0xC
    UPROPERTY() bool bChildInitial;  // 0x0014, size 0x1
    UPROPERTY() FRigElementKey Parent;  // 0x0018, size 0xC
    UPROPERTY() bool bParentInitial;  // 0x0024, size 0x1
    UPROPERTY() FTransform RelativeTransform;  // 0x0030, size 0x30
    UPROPERTY() FCachedRigElement CachedChild;  // 0x0060, size 0x14
    UPROPERTY() FCachedRigElement CachedParent;  // 0x0074, size 0x14
};
