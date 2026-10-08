// /Script/ControlRig.RigUnit_MathVectorScale
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathVector.h

USTRUCT()
struct FRigUnit_MathVectorScale : public FRigUnit_MathVectorBase
{
    UPROPERTY() FVector Value;  // 0x0008, size 0xC
    UPROPERTY() float Factor;  // 0x0014, size 0x4
    UPROPERTY() FVector Result;  // 0x0018, size 0xC
};
