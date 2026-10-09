// /Script/ControlRig.RigUnit_BinaryFloatOp
// size 0x18, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/Math/RigUnit_Float.h

USTRUCT()
struct FRigUnit_BinaryFloatOp : public FRigUnit
{
public:
    UPROPERTY() float Argument0;  // 0x0008, size 0x4
    UPROPERTY() float Argument1;  // 0x000C, size 0x4
    UPROPERTY() float Result;  // 0x0010, size 0x4
};
