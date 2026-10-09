// /Script/ControlRig.RigUnit_ConvertQuaternionToVector
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/Math/RigUnit_Converter.h

USTRUCT()
struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
{
public:
    UPROPERTY() FQuat Input;  // 0x0010, size 0x10
    UPROPERTY() FVector Result;  // 0x0020, size 0xC
};
