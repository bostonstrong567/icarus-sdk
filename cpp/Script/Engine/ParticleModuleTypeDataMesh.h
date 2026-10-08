// /Script/Engine.ParticleModuleTypeDataMesh
// Derives from: UParticleModuleTypeDataBase > UParticleModule > UObject
// size 0x98, declared in Engine/Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleTypeDataMesh : public UParticleModuleTypeDataBase
{
public:
    UPROPERTY(EditAnywhere) UStaticMesh* Mesh;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) float LODSizeScale;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) uint8 bUseStaticMeshLODs : 1;  // 0x0044, mask 0x01
    UPROPERTY() uint8 CastShadows : 1;  // 0x0044, mask 0x02
    UPROPERTY() uint8 DoCollisions : 1;  // 0x0044, mask 0x04
    UPROPERTY(EditAnywhere) TEnumAsByte<EMeshScreenAlignment> MeshAlignment;  // 0x0045, size 0x1
    UPROPERTY(EditAnywhere) uint8 bOverrideMaterial : 1;  // 0x0046, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOverrideDefaultMotionBlurSettings : 1;  // 0x0046, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bEnableMotionBlur : 1;  // 0x0046, mask 0x04
    UPROPERTY(EditAnywhere) FRawDistributionVector RollPitchYawRange;  // 0x0048, size 0x48
    UPROPERTY(EditAnywhere) TEnumAsByte<EParticleAxisLock> AxisLockOption;  // 0x0090, size 0x1
    UPROPERTY(EditAnywhere) uint8 bCameraFacing : 1;  // 0x0091, mask 0x01
    UPROPERTY(Deprecated) TEnumAsByte<EMeshCameraFacingUpAxis> CameraFacingUpAxisOption;  // 0x0092, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EMeshCameraFacingOptions> CameraFacingOption;  // 0x0093, size 0x1
    UPROPERTY(EditAnywhere) uint8 bApplyParticleRotationAsSpin : 1;  // 0x0094, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bFaceCameraDirectionRatherThanPosition : 1;  // 0x0094, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bCollisionsConsiderPartilceSize : 1;  // 0x0094, mask 0x04

    // Not reflected: the engine's scripting cannot see these.
    FRandomStream RandomStream;  // 0x0038
};
