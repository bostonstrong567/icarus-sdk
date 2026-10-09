// /Script/ControlRig.RigUnit_MathVectorLength
// size 0x18, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathVector.h

USTRUCT()
struct FRigUnit_MathVectorLength : public FRigUnit_MathVectorBase
{
public:
    UPROPERTY() FVector Value;  // 0x0008, size 0xC
    UPROPERTY() float Result;  // 0x0014, size 0x4
};
