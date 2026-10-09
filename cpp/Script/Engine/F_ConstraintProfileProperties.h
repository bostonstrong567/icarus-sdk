// /Script/Engine.ConstraintProfileProperties
// size 0x114, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h

USTRUCT()
struct FConstraintProfileProperties
{
public:
    UPROPERTY(EditAnywhere) float ProjectionLinearTolerance;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float ProjectionAngularTolerance;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float ProjectionLinearAlpha;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float ProjectionAngularAlpha;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) float LinearBreakThreshold;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float LinearPlasticityThreshold;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) float AngularBreakThreshold;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere) float AngularPlasticityThreshold;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere) FLinearConstraint LinearLimit;  // 0x0020, size 0x1C
    UPROPERTY(EditAnywhere) FConeConstraint ConeLimit;  // 0x003C, size 0x20
    UPROPERTY(EditAnywhere) FTwistConstraint TwistLimit;  // 0x005C, size 0x1C
    UPROPERTY(EditAnywhere) FLinearDriveConstraint LinearDrive;  // 0x0078, size 0x4C
    UPROPERTY(EditAnywhere) FAngularDriveConstraint AngularDrive;  // 0x00C4, size 0x4C
    UPROPERTY(EditAnywhere) uint8 bDisableCollision : 1;  // 0x0110, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bParentDominates : 1;  // 0x0110, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bEnableProjection : 1;  // 0x0110, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bEnableSoftProjection : 1;  // 0x0110, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bAngularBreakable : 1;  // 0x0110, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bAngularPlasticity : 1;  // 0x0110, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bLinearBreakable : 1;  // 0x0110, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bLinearPlasticity : 1;  // 0x0110, mask 0x80
};
