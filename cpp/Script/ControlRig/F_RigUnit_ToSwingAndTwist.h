// /Script/ControlRig.RigUnit_ToSwingAndTwist
// size 0x50, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/Math/RigUnit_Converter.h

USTRUCT()
struct FRigUnit_ToSwingAndTwist : public FRigUnit
{
    UPROPERTY() FQuat Input;  // 0x0010, size 0x10
    UPROPERTY() FVector TwistAxis;  // 0x0020, size 0xC
    UPROPERTY() FQuat Swing;  // 0x0030, size 0x10
    UPROPERTY() FQuat Twist;  // 0x0040, size 0x10
};
