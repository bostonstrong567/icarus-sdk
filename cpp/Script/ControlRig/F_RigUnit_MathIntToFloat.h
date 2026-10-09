// /Script/ControlRig.RigUnit_MathIntToFloat
// size 0x10, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathInt.h

USTRUCT()
struct FRigUnit_MathIntToFloat : public FRigUnit_MathIntBase
{
public:
    UPROPERTY() int32 Value;  // 0x0008, size 0x4
    UPROPERTY() float Result;  // 0x000C, size 0x4
};
