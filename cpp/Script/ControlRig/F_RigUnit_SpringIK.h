// /Script/ControlRig.RigUnit_SpringIK
// size 0x1D0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h

USTRUCT()
struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
{
    UPROPERTY() FName StartBone;  // 0x0068, size 0x8
    UPROPERTY() FName EndBone;  // 0x0070, size 0x8
    UPROPERTY() float HierarchyStrength;  // 0x0078, size 0x4
    UPROPERTY() float EffectorStrength;  // 0x007C, size 0x4
    UPROPERTY() float EffectorRatio;  // 0x0080, size 0x4
    UPROPERTY() float RootStrength;  // 0x0084, size 0x4
    UPROPERTY() float RootRatio;  // 0x0088, size 0x4
    UPROPERTY() float Damping;  // 0x008C, size 0x4
    UPROPERTY() FVector PoleVector;  // 0x0090, size 0xC
    UPROPERTY() bool bFlipPolePlane;  // 0x009C, size 0x1
    UPROPERTY() EControlRigVectorKind PoleVectorKind;  // 0x009D, size 0x1
    UPROPERTY() FName PoleVectorSpace;  // 0x00A0, size 0x8
    UPROPERTY() FVector PrimaryAxis;  // 0x00A8, size 0xC
    UPROPERTY() FVector SecondaryAxis;  // 0x00B4, size 0xC
    UPROPERTY() bool bLiveSimulation;  // 0x00C0, size 0x1
    UPROPERTY() int32 Iterations;  // 0x00C4, size 0x4
    UPROPERTY() bool bLimitLocalPosition;  // 0x00C8, size 0x1
    UPROPERTY() bool bPropagateToChildren;  // 0x00C9, size 0x1
    UPROPERTY() FRigUnit_SpringIK_DebugSettings DebugSettings;  // 0x00D0, size 0x50
    UPROPERTY(Transient) FRigUnit_SpringIK_WorkData WorkData;  // 0x0120, size 0xB0
};
