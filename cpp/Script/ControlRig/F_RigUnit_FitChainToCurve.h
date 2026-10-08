// /Script/ControlRig.RigUnit_FitChainToCurve
// size 0x200, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h

USTRUCT()
struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
{
    UPROPERTY() FName StartBone;  // 0x0068, size 0x8
    UPROPERTY() FName EndBone;  // 0x0070, size 0x8
    UPROPERTY() FCRFourPointBezier Bezier;  // 0x0078, size 0x30
    UPROPERTY() EControlRigCurveAlignment Alignment;  // 0x00A8, size 0x1
    UPROPERTY() float Minimum;  // 0x00AC, size 0x4
    UPROPERTY() float Maximum;  // 0x00B0, size 0x4
    UPROPERTY() int32 SamplingPrecision;  // 0x00B4, size 0x4
    UPROPERTY() FVector PrimaryAxis;  // 0x00B8, size 0xC
    UPROPERTY() FVector SecondaryAxis;  // 0x00C4, size 0xC
    UPROPERTY() FVector PoleVectorPosition;  // 0x00D0, size 0xC
    UPROPERTY() TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;  // 0x00E0, size 0x10
    UPROPERTY() EControlRigAnimEasingType RotationEaseType;  // 0x00F0, size 0x1
    UPROPERTY() float Weight;  // 0x00F4, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x00F8, size 0x1
    UPROPERTY() FRigUnit_FitChainToCurve_DebugSettings DebugSettings;  // 0x0100, size 0x60
    UPROPERTY(Transient) FRigUnit_FitChainToCurve_WorkData WorkData;  // 0x0160, size 0x98
};
