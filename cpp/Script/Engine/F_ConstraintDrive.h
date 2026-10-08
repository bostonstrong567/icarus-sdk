// /Script/Engine.ConstraintDrive
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h

USTRUCT()
struct FConstraintDrive
{
    UPROPERTY(EditAnywhere) float Stiffness;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float Damping;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float MaxForce;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) uint8 bEnablePositionDrive : 1;  // 0x000C, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bEnableVelocityDrive : 1;  // 0x000C, mask 0x02
};
