// /Script/ControlRig.RigUnit_QuaternionToAxisAndAngle
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/Math/RigUnit_Quaternion.h

USTRUCT()
struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
{
    UPROPERTY() FQuat Argument;  // 0x0010, size 0x10
    UPROPERTY() FVector Axis;  // 0x0020, size 0xC
    UPROPERTY() float Angle;  // 0x002C, size 0x4
};
