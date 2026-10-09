// /Script/Engine.ConeConstraint
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h

USTRUCT()
struct FConeConstraint : public FConstraintBaseParams
{
public:
    UPROPERTY(EditAnywhere) float Swing1LimitDegrees;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) float Swing2LimitDegrees;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<EAngularConstraintMotion> Swing1Motion;  // 0x001C, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EAngularConstraintMotion> Swing2Motion;  // 0x001D, size 0x1
};
