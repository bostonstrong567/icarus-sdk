// /Script/FullBodyIK.RigUnit_FullbodyIK
// size 0x2B0, declared in Engine/Plugins/Experimental/FullBodyIK/Source/FullBodyIK/Private/RigUnit_FullbodyIK.h

USTRUCT()
struct FRigUnit_FullbodyIK : public FRigUnit_HighlevelBaseMutable
{
    UPROPERTY() FRigElementKey Root;  // 0x0068, size 0xC
    UPROPERTY() TArray<FFBIKEndEffector> Effectors;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere) TArray<FFBIKConstraintOption> Constraints;  // 0x0088, size 0x10
    UPROPERTY() FSolverInput SolverProperty;  // 0x0098, size 0x24
    UPROPERTY() FMotionProcessInput MotionProperty;  // 0x00BC, size 0x2
    UPROPERTY() bool bPropagateToChildren;  // 0x00BE, size 0x1
    UPROPERTY() FFBIKDebugOption DebugOption;  // 0x00C0, size 0x50
    UPROPERTY(Transient) FRigUnit_FullbodyIK_WorkData WorkData;  // 0x0110, size 0x198
};
