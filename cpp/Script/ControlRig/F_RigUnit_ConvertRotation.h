// /Script/ControlRig.RigUnit_ConvertRotation
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/Math/RigUnit_Converter.h

USTRUCT()
struct FRigUnit_ConvertRotation : public FRigUnit
{
public:
    UPROPERTY() FRotator Input;  // 0x0008, size 0xC
    UPROPERTY() FQuat Result;  // 0x0020, size 0x10
};
