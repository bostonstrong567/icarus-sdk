// /Script/ControlRig.RigUnit_FitChainToCurve_DebugSettings
// size 0x60, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h

USTRUCT()
struct FRigUnit_FitChainToCurve_DebugSettings
{
    UPROPERTY(EditAnywhere) bool bEnabled;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) float Scale;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) FLinearColor CurveColor;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) FLinearColor SegmentsColor;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere) FTransform WorldOffset;  // 0x0030, size 0x30
};
