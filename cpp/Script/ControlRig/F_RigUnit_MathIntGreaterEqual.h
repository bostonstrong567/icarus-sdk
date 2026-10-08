// /Script/ControlRig.RigUnit_MathIntGreaterEqual
// size 0x18, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathInt.h

USTRUCT()
struct FRigUnit_MathIntGreaterEqual : public FRigUnit_MathIntBase
{
    UPROPERTY() int32 A;  // 0x0008, size 0x4
    UPROPERTY() int32 B;  // 0x000C, size 0x4
    UPROPERTY() bool Result;  // 0x0010, size 0x1
};
