// /Script/ControlRig.RigUnit_MathBoolEquals
// size 0x10, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathBool.h

USTRUCT()
struct FRigUnit_MathBoolEquals : public FRigUnit_MathBoolBase
{
public:
    UPROPERTY() bool A;  // 0x0008, size 0x1
    UPROPERTY() bool B;  // 0x0009, size 0x1
    UPROPERTY() bool Result;  // 0x000A, size 0x1
};
