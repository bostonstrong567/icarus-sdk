// /Script/ControlRig.RigUnit_Clamp_Float
// size 0x18, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/Math/RigUnit_Float.h

USTRUCT()
struct FRigUnit_Clamp_Float : public FRigUnit
{
public:
    UPROPERTY() float Value;  // 0x0008, size 0x4
    UPROPERTY() float Min;  // 0x000C, size 0x4
    UPROPERTY() float Max;  // 0x0010, size 0x4
    UPROPERTY() float Result;  // 0x0014, size 0x4
};
