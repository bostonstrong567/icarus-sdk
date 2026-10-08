// /Script/Engine.AngularDriveConstraint
// size 0x4C, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h

USTRUCT()
struct FAngularDriveConstraint
{
    UPROPERTY(EditAnywhere) FConstraintDrive TwistDrive;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FConstraintDrive SwingDrive;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) FConstraintDrive SlerpDrive;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere) FRotator OrientationTarget;  // 0x0030, size 0xC
    UPROPERTY(EditAnywhere) FVector AngularVelocityTarget;  // 0x003C, size 0xC
    UPROPERTY(EditAnywhere) TEnumAsByte<EAngularDriveMode> AngularDriveMode;  // 0x0048, size 0x1
};
