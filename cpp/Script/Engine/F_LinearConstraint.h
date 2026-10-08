// /Script/Engine.LinearConstraint
// size 0x1C, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h

USTRUCT()
struct FLinearConstraint : public FConstraintBaseParams
{
    UPROPERTY(EditAnywhere) float Limit;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<ELinearConstraintMotion> XMotion;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ELinearConstraintMotion> YMotion;  // 0x0019, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ELinearConstraintMotion> ZMotion;  // 0x001A, size 0x1
};
