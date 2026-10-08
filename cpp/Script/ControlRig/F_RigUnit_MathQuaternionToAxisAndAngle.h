// /Script/ControlRig.RigUnit_MathQuaternionToAxisAndAngle
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathQuaternion.h

USTRUCT()
struct FRigUnit_MathQuaternionToAxisAndAngle : public FRigUnit_MathQuaternionBase
{
    UPROPERTY() FQuat Value;  // 0x0010, size 0x10
    UPROPERTY() FVector Axis;  // 0x0020, size 0xC
    UPROPERTY() float Angle;  // 0x002C, size 0x4
};
