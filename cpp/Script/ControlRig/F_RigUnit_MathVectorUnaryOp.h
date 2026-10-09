// /Script/ControlRig.RigUnit_MathVectorUnaryOp
// size 0x20, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathVector.h

USTRUCT()
struct FRigUnit_MathVectorUnaryOp : public FRigUnit_MathVectorBase
{
public:
    UPROPERTY() FVector Value;  // 0x0008, size 0xC
    UPROPERTY() FVector Result;  // 0x0014, size 0xC
};
