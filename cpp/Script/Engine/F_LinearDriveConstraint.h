// /Script/Engine.LinearDriveConstraint
// size 0x4C, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h

USTRUCT()
struct FLinearDriveConstraint
{
    UPROPERTY(EditAnywhere) FVector PositionTarget;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere) FVector VelocityTarget;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere) FConstraintDrive XDrive;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere) FConstraintDrive YDrive;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere) FConstraintDrive ZDrive;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere) uint8 bEnablePositionDrive : 1;  // 0x0048, mask 0x01
};
