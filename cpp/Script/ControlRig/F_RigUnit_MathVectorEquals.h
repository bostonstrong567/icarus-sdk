// /Script/ControlRig.RigUnit_MathVectorEquals
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathVector.h

USTRUCT()
struct FRigUnit_MathVectorEquals : public FRigUnit_MathVectorBase
{
    UPROPERTY() FVector A;  // 0x0008, size 0xC
    UPROPERTY() FVector B;  // 0x0014, size 0xC
    UPROPERTY() bool Result;  // 0x0020, size 0x1
};
