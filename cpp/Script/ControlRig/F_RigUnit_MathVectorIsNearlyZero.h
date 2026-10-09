// /Script/ControlRig.RigUnit_MathVectorIsNearlyZero
// size 0x20, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathVector.h

USTRUCT()
struct FRigUnit_MathVectorIsNearlyZero : public FRigUnit_MathVectorBase
{
public:
    UPROPERTY() FVector Value;  // 0x0008, size 0xC
    UPROPERTY() float Tolerance;  // 0x0014, size 0x4
    UPROPERTY() bool Result;  // 0x0018, size 0x1
};
