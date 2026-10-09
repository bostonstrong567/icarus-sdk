// /Script/ControlRig.RigUnit_BinaryVectorOp
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/Math/RigUnit_Vector.h

USTRUCT()
struct FRigUnit_BinaryVectorOp : public FRigUnit
{
public:
    UPROPERTY() FVector Argument0;  // 0x0008, size 0xC
    UPROPERTY() FVector Argument1;  // 0x0014, size 0xC
    UPROPERTY() FVector Result;  // 0x0020, size 0xC
};
