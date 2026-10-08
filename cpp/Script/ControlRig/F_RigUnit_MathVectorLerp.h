// /Script/ControlRig.RigUnit_MathVectorLerp
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathVector.h

USTRUCT()
struct FRigUnit_MathVectorLerp : public FRigUnit_MathVectorBase
{
    UPROPERTY() FVector A;  // 0x0008, size 0xC
    UPROPERTY() FVector B;  // 0x0014, size 0xC
    UPROPERTY() float T;  // 0x0020, size 0x4
    UPROPERTY() FVector Result;  // 0x0024, size 0xC
};
