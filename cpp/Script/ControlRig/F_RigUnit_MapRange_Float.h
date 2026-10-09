// /Script/ControlRig.RigUnit_MapRange_Float
// size 0x20, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/Math/RigUnit_Float.h

USTRUCT()
struct FRigUnit_MapRange_Float : public FRigUnit
{
public:
    UPROPERTY() float Value;  // 0x0008, size 0x4
    UPROPERTY() float MinIn;  // 0x000C, size 0x4
    UPROPERTY() float MaxIn;  // 0x0010, size 0x4
    UPROPERTY() float MinOut;  // 0x0014, size 0x4
    UPROPERTY() float MaxOut;  // 0x0018, size 0x4
    UPROPERTY() float Result;  // 0x001C, size 0x4
};
