// /Script/ControlRig.RigUnit_Distance_VectorVector
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/Math/RigUnit_Vector.h

USTRUCT()
struct FRigUnit_Distance_VectorVector : public FRigUnit
{
    UPROPERTY() FVector Argument0;  // 0x0008, size 0xC
    UPROPERTY() FVector Argument1;  // 0x0014, size 0xC
    UPROPERTY() float Result;  // 0x0020, size 0x4
};
