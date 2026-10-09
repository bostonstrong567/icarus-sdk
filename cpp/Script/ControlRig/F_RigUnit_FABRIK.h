// /Script/ControlRig.RigUnit_FABRIK
// size 0x100, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h

USTRUCT()
struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
{
public:
    UPROPERTY() FName StartBone;  // 0x0068, size 0x8
    UPROPERTY() FName EffectorBone;  // 0x0070, size 0x8
    UPROPERTY() FTransform EffectorTransform;  // 0x0080, size 0x30
    UPROPERTY() float Precision;  // 0x00B0, size 0x4
    UPROPERTY() float Weight;  // 0x00B4, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x00B8, size 0x1
    UPROPERTY() int32 MaxIterations;  // 0x00BC, size 0x4
    UPROPERTY(Transient) FRigUnit_FABRIK_WorkData WorkData;  // 0x00C0, size 0x38
};
