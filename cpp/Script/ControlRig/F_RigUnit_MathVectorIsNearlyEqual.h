// /Script/ControlRig.RigUnit_MathVectorIsNearlyEqual
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathVector.h

USTRUCT()
struct FRigUnit_MathVectorIsNearlyEqual : public FRigUnit_MathVectorBase
{
public:
    UPROPERTY() FVector A;  // 0x0008, size 0xC
    UPROPERTY() FVector B;  // 0x0014, size 0xC
    UPROPERTY() float Tolerance;  // 0x0020, size 0x4
    UPROPERTY() bool Result;  // 0x0024, size 0x1
};
