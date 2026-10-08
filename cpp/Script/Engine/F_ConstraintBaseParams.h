// /Script/Engine.ConstraintBaseParams
// size 0x14, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h

USTRUCT()
struct FConstraintBaseParams
{
    UPROPERTY(EditAnywhere) float Stiffness;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float Damping;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float Restitution;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float ContactDistance;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) uint8 bSoftConstraint : 1;  // 0x0010, mask 0x01
};
