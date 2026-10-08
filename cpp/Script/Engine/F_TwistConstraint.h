// /Script/Engine.TwistConstraint
// size 0x1C, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h

USTRUCT()
struct FTwistConstraint : public FConstraintBaseParams
{
    UPROPERTY(EditAnywhere) float TwistLimitDegrees;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<EAngularConstraintMotion> TwistMotion;  // 0x0018, size 0x1
};
