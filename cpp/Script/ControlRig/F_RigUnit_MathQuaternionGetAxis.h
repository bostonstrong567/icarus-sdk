// /Script/ControlRig.RigUnit_MathQuaternionGetAxis
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathQuaternion.h

USTRUCT()
struct FRigUnit_MathQuaternionGetAxis : public FRigUnit_MathQuaternionBase
{
    UPROPERTY() FQuat Quaternion;  // 0x0010, size 0x10
    UPROPERTY() TEnumAsByte<EAxis> Axis;  // 0x0020, size 0x1
    UPROPERTY() FVector Result;  // 0x0024, size 0xC
};
