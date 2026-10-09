// /Script/ControlRig.RigUnit_AnimEvalRichCurve
// size 0xB0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Animation/RigUnit_AnimEvalRichCurve.h

USTRUCT()
struct FRigUnit_AnimEvalRichCurve : public FRigUnit_AnimBase
{
public:
    UPROPERTY() float Value;  // 0x0008, size 0x4
    UPROPERTY() FRuntimeFloatCurve Curve;  // 0x0010, size 0x88
    UPROPERTY() float SourceMinimum;  // 0x0098, size 0x4
    UPROPERTY() float SourceMaximum;  // 0x009C, size 0x4
    UPROPERTY() float TargetMinimum;  // 0x00A0, size 0x4
    UPROPERTY() float TargetMaximum;  // 0x00A4, size 0x4
    UPROPERTY() float Result;  // 0x00A8, size 0x4
};
