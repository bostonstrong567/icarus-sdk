// /Script/ControlRig.RigUnit_CCDIKPerItem
// size 0x140, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h

USTRUCT()
struct FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
{
    UPROPERTY() FRigElementKeyCollection Items;  // 0x0068, size 0x10
    UPROPERTY() FTransform EffectorTransform;  // 0x0080, size 0x30
    UPROPERTY() float Precision;  // 0x00B0, size 0x4
    UPROPERTY() float Weight;  // 0x00B4, size 0x4
    UPROPERTY() int32 MaxIterations;  // 0x00B8, size 0x4
    UPROPERTY() bool bStartFromTail;  // 0x00BC, size 0x1
    UPROPERTY() float BaseRotationLimit;  // 0x00C0, size 0x4
    UPROPERTY() TArray<FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;  // 0x00C8, size 0x10
    UPROPERTY() bool bPropagateToChildren;  // 0x00D8, size 0x1
    UPROPERTY() FRigUnit_CCDIK_WorkData WorkData;  // 0x00E0, size 0x58
};
