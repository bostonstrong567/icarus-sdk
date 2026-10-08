// /Script/ChaosCloth.ChaosClothConfig
// Derives from: UClothConfigCommon > UClothConfigBase > UObject
// size 0xC8, declared in Engine/Plugins/Experimental/ChaosCloth/Source/Chaos/Public/ChaosCloth/ChaosClothConfig.h

UCLASS()
class UChaosClothConfig : public UClothConfigCommon
{
public:
    UPROPERTY(EditAnywhere) EClothMassMode MassMode;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) float UniformMass;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere) float TotalMass;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) float Density;  // 0x0034, size 0x4
    UPROPERTY() float MinPerParticleMass;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) float EdgeStiffness;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere) float BendingStiffness;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) bool bUseBendingElements;  // 0x0044, size 0x1
    UPROPERTY(EditAnywhere) float AreaStiffness;  // 0x0048, size 0x4
    UPROPERTY() float VolumeStiffness;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere) FChaosClothWeightedValue TetherStiffness;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere) float LimitScale;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere) bool bUseGeodesicDistance;  // 0x005C, size 0x1
    UPROPERTY() float ShapeTargetStiffness;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere) float CollisionThickness;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere) float FrictionCoefficient;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere) bool bUseCCD;  // 0x006C, size 0x1
    UPROPERTY(EditAnywhere) bool bUseSelfCollisions;  // 0x006D, size 0x1
    UPROPERTY(EditAnywhere) float SelfCollisionThickness;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere) bool bUseLegacyBackstop;  // 0x0074, size 0x1
    UPROPERTY(EditAnywhere) float DampingCoefficient;  // 0x0078, size 0x4
    UPROPERTY(EditAnywhere) bool bUsePointBasedWindModel;  // 0x007C, size 0x1
    UPROPERTY(EditAnywhere) float DragCoefficient;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere) float LiftCoefficient;  // 0x0084, size 0x4
    UPROPERTY(EditAnywhere) bool bUseGravityOverride;  // 0x0088, size 0x1
    UPROPERTY(EditAnywhere) float GravityScale;  // 0x008C, size 0x4
    UPROPERTY(EditAnywhere) FVector Gravity;  // 0x0090, size 0xC
    UPROPERTY(EditAnywhere) FChaosClothWeightedValue AnimDriveStiffness;  // 0x009C, size 0x8
    UPROPERTY(EditAnywhere) FChaosClothWeightedValue AnimDriveDamping;  // 0x00A4, size 0x8
    UPROPERTY(EditAnywhere) FVector LinearVelocityScale;  // 0x00AC, size 0xC
    UPROPERTY(EditAnywhere) float AngularVelocityScale;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere) float FictitiousAngularScale;  // 0x00BC, size 0x4
    UPROPERTY() bool bUseTetrahedralConstraints;  // 0x00C0, size 0x1
    UPROPERTY() bool bUseThinShellVolumeConstraints;  // 0x00C1, size 0x1
    UPROPERTY() bool bUseContinuousCollisionDetection;  // 0x00C2, size 0x1
};
