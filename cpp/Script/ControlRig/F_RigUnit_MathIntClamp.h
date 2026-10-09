// /Script/ControlRig.RigUnit_MathIntClamp
// size 0x18, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathInt.h

USTRUCT()
struct FRigUnit_MathIntClamp : public FRigUnit_MathIntBase
{
public:
    UPROPERTY() int32 Value;  // 0x0008, size 0x4
    UPROPERTY() int32 Minimum;  // 0x000C, size 0x4
    UPROPERTY() int32 Maximum;  // 0x0010, size 0x4
    UPROPERTY() int32 Result;  // 0x0014, size 0x4
};
