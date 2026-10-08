// /Script/ControlRig.RigUnit_MathVectorMirror
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathVector.h

USTRUCT()
struct FRigUnit_MathVectorMirror : public FRigUnit_MathVectorBase
{
    UPROPERTY() FVector Value;  // 0x0008, size 0xC
    UPROPERTY() FVector Normal;  // 0x0014, size 0xC
    UPROPERTY() FVector Result;  // 0x0020, size 0xC
};
