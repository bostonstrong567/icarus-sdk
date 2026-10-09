// /Script/ControlRig.RigUnit_MathVectorClamp
// size 0x38, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathVector.h

USTRUCT()
struct FRigUnit_MathVectorClamp : public FRigUnit_MathVectorBase
{
public:
    UPROPERTY() FVector Value;  // 0x0008, size 0xC
    UPROPERTY() FVector Minimum;  // 0x0014, size 0xC
    UPROPERTY() FVector Maximum;  // 0x0020, size 0xC
    UPROPERTY() FVector Result;  // 0x002C, size 0xC
};
