// /Script/ControlRig.RigUnit_MathFloatLess
// size 0x18, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathFloat.h

USTRUCT()
struct FRigUnit_MathFloatLess : public FRigUnit_MathFloatBase
{
public:
    UPROPERTY() float A;  // 0x0008, size 0x4
    UPROPERTY() float B;  // 0x000C, size 0x4
    UPROPERTY() bool Result;  // 0x0010, size 0x1
};
