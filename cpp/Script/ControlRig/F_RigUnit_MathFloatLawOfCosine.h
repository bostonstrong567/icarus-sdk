// /Script/ControlRig.RigUnit_MathFloatLawOfCosine
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathFloat.h

USTRUCT()
struct FRigUnit_MathFloatLawOfCosine : public FRigUnit_MathFloatBase
{
    UPROPERTY() float A;  // 0x0008, size 0x4
    UPROPERTY() float B;  // 0x000C, size 0x4
    UPROPERTY() float C;  // 0x0010, size 0x4
    UPROPERTY() float AlphaAngle;  // 0x0014, size 0x4
    UPROPERTY() float BetaAngle;  // 0x0018, size 0x4
    UPROPERTY() float GammaAngle;  // 0x001C, size 0x4
    UPROPERTY() bool bValid;  // 0x0020, size 0x1
};
