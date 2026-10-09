// /Script/ControlRig.RigUnit_MathVectorMakeBezierFourPoint
// size 0x38, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathVector.h

USTRUCT()
struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigUnit_MathVectorBase
{
public:
    UPROPERTY() FCRFourPointBezier Bezier;  // 0x0008, size 0x30
};
