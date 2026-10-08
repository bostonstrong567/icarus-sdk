// /Script/ControlRig.RigUnit_MathFloatRemap
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathFloat.h

USTRUCT()
struct FRigUnit_MathFloatRemap : public FRigUnit_MathFloatBase
{
    UPROPERTY() float Value;  // 0x0008, size 0x4
    UPROPERTY() float SourceMinimum;  // 0x000C, size 0x4
    UPROPERTY() float SourceMaximum;  // 0x0010, size 0x4
    UPROPERTY() float TargetMinimum;  // 0x0014, size 0x4
    UPROPERTY() float TargetMaximum;  // 0x0018, size 0x4
    UPROPERTY() bool bClamp;  // 0x001C, size 0x1
    UPROPERTY() float Result;  // 0x0020, size 0x4
};
