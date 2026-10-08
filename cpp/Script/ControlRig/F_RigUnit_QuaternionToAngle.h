// /Script/ControlRig.RigUnit_QuaternionToAngle
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/Math/RigUnit_Quaternion.h

USTRUCT()
struct FRigUnit_QuaternionToAngle : public FRigUnit
{
    UPROPERTY() FVector Axis;  // 0x0008, size 0xC
    UPROPERTY() FQuat Argument;  // 0x0020, size 0x10
    UPROPERTY() float Angle;  // 0x0030, size 0x4
};
