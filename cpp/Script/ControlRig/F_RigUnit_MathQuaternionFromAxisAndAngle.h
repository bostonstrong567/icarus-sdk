// /Script/ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathQuaternion.h

USTRUCT()
struct FRigUnit_MathQuaternionFromAxisAndAngle : public FRigUnit_MathQuaternionBase
{
    UPROPERTY() FVector Axis;  // 0x0008, size 0xC
    UPROPERTY() float Angle;  // 0x0014, size 0x4
    UPROPERTY() FQuat Result;  // 0x0020, size 0x10
};
