// /Script/ControlRig.RigUnit_ConvertTransform
// size 0x70, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/Math/RigUnit_Converter.h

USTRUCT()
struct FRigUnit_ConvertTransform : public FRigUnit
{
public:
    UPROPERTY() FTransform Input;  // 0x0010, size 0x30
    UPROPERTY() FEulerTransform Result;  // 0x0040, size 0x24
};
