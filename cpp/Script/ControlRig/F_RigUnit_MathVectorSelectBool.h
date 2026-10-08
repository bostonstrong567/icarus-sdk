// /Script/ControlRig.RigUnit_MathVectorSelectBool
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathVector.h

USTRUCT()
struct FRigUnit_MathVectorSelectBool : public FRigUnit_MathVectorBase
{
    UPROPERTY() bool Condition;  // 0x0008, size 0x1
    UPROPERTY() FVector IfTrue;  // 0x000C, size 0xC
    UPROPERTY() FVector IfFalse;  // 0x0018, size 0xC
    UPROPERTY() FVector Result;  // 0x0024, size 0xC
};
