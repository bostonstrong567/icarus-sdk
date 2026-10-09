// /Script/ControlRig.RigUnit_MathVectorClampLength
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathVector.h

USTRUCT()
struct FRigUnit_MathVectorClampLength : public FRigUnit_MathVectorBase
{
public:
    UPROPERTY() FVector Value;  // 0x0008, size 0xC
    UPROPERTY() float MinimumLength;  // 0x0014, size 0x4
    UPROPERTY() float MaximumLength;  // 0x0018, size 0x4
    UPROPERTY() FVector Result;  // 0x001C, size 0xC
};
