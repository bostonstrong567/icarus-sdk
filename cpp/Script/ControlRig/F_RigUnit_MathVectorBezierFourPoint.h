// /Script/ControlRig.RigUnit_MathVectorBezierFourPoint
// size 0x58, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathVector.h

USTRUCT()
struct FRigUnit_MathVectorBezierFourPoint : public FRigUnit_MathVectorBase
{
    UPROPERTY() FCRFourPointBezier Bezier;  // 0x0008, size 0x30
    UPROPERTY() float T;  // 0x0038, size 0x4
    UPROPERTY() FVector Result;  // 0x003C, size 0xC
    UPROPERTY() FVector Tangent;  // 0x0048, size 0xC
};
