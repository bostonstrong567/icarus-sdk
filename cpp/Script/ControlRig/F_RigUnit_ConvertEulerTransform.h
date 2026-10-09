// /Script/ControlRig.RigUnit_ConvertEulerTransform
// size 0x60, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/Math/RigUnit_Converter.h

USTRUCT()
struct FRigUnit_ConvertEulerTransform : public FRigUnit
{
public:
    UPROPERTY() FEulerTransform Input;  // 0x0008, size 0x24
    UPROPERTY() FTransform Result;  // 0x0030, size 0x30
};
