// /Script/ControlRig.RigUnit_MathColorLerp
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathColor.h

USTRUCT()
struct FRigUnit_MathColorLerp : public FRigUnit_MathColorBase
{
public:
    UPROPERTY() FLinearColor A;  // 0x0008, size 0x10
    UPROPERTY() FLinearColor B;  // 0x0018, size 0x10
    UPROPERTY() float T;  // 0x0028, size 0x4
    UPROPERTY() FLinearColor Result;  // 0x002C, size 0x10
};
