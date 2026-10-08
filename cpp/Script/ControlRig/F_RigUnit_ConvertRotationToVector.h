// /Script/ControlRig.RigUnit_ConvertRotationToVector
// size 0x20, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/Math/RigUnit_Converter.h

USTRUCT()
struct FRigUnit_ConvertRotationToVector : public FRigUnit
{
    UPROPERTY() FRotator Input;  // 0x0008, size 0xC
    UPROPERTY() FVector Result;  // 0x0014, size 0xC
};
