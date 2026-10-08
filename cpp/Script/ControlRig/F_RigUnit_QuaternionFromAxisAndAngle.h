// /Script/ControlRig.RigUnit_QuaternionFromAxisAndAngle
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/Math/RigUnit_Quaternion.h

USTRUCT()
struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{
    UPROPERTY() FVector Axis;  // 0x0008, size 0xC
    UPROPERTY() float Angle;  // 0x0014, size 0x4
    UPROPERTY() FQuat Result;  // 0x0020, size 0x10
};
