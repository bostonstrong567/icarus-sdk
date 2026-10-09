// /Script/ControlRig.RigUnit_ConvertVectorToRotation
// size 0x20, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/Math/RigUnit_Converter.h

USTRUCT()
struct FRigUnit_ConvertVectorToRotation : public FRigUnit
{
public:
    UPROPERTY() FVector Input;  // 0x0008, size 0xC
    UPROPERTY() FRotator Result;  // 0x0014, size 0xC
};
