// /Script/ControlRig.RigUnit_MultiFABRIK
// size 0xF0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_MultiFABRIK.h

USTRUCT()
struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
{
    UPROPERTY() FName RootBone;  // 0x0068, size 0x8
    UPROPERTY() TArray<FRigUnit_MultiFABRIK_EndEffector> Effectors;  // 0x0070, size 0x10
    UPROPERTY() float Precision;  // 0x0080, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x0084, size 0x1
    UPROPERTY() int32 MaxIterations;  // 0x0088, size 0x4
    UPROPERTY(Transient) FRigUnit_MultiFABRIK_WorkData WorkData;  // 0x0090, size 0x60
};
