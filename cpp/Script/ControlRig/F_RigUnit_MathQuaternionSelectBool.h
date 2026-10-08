// /Script/ControlRig.RigUnit_MathQuaternionSelectBool
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathQuaternion.h

USTRUCT()
struct FRigUnit_MathQuaternionSelectBool : public FRigUnit_MathQuaternionBase
{
    UPROPERTY() bool Condition;  // 0x0008, size 0x1
    UPROPERTY() FQuat IfTrue;  // 0x0010, size 0x10
    UPROPERTY() FQuat IfFalse;  // 0x0020, size 0x10
    UPROPERTY() FQuat Result;  // 0x0030, size 0x10
};
