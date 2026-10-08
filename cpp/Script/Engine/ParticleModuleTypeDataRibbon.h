// /Script/Engine.ParticleModuleTypeDataRibbon
// Derives from: UParticleModuleTypeDataBase > UParticleModule > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleTypeDataRibbon : public UParticleModuleTypeDataBase
{
public:
    UPROPERTY() int32 MaxTessellationBetweenParticles;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) int32 SheetsPerTrail;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxTrailCount;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxParticleInTrailCount;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere) uint8 bDeadTrailsOnDeactivate : 1;  // 0x0040, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bDeadTrailsOnSourceLoss : 1;  // 0x0040, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bClipSourceSegement : 1;  // 0x0040, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bEnablePreviousTangentRecalculation : 1;  // 0x0040, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bTangentRecalculationEveryFrame : 1;  // 0x0040, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bSpawnInitialParticle : 1;  // 0x0040, mask 0x20
    UPROPERTY(EditAnywhere) TEnumAsByte<ETrailsRenderAxisOption> RenderAxis;  // 0x0044, size 0x1
    UPROPERTY(EditAnywhere) float TangentSpawningScalar;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) uint8 bRenderGeometry : 1;  // 0x004C, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bRenderSpawnPoints : 1;  // 0x004C, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bRenderTangents : 1;  // 0x004C, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bRenderTessellation : 1;  // 0x004C, mask 0x08
    UPROPERTY(EditAnywhere) float TilingDistance;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere) float DistanceTessellationStepSize;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere) uint8 bEnableTangentDiffInterpScale : 1;  // 0x0058, mask 0x01
    UPROPERTY(EditAnywhere) float TangentTessellationScalar;  // 0x005C, size 0x4
};
