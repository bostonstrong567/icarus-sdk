// /Script/ControlRig.RigUnit_MathVectorFromFloat
// size 0x18, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathVector.h

USTRUCT()
struct FRigUnit_MathVectorFromFloat : public FRigUnit_MathVectorBase
{
public:
    UPROPERTY() float Value;  // 0x0008, size 0x4
    UPROPERTY() FVector Result;  // 0x000C, size 0xC
};
