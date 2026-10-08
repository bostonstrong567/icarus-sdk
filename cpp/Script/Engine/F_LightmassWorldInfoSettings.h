// /Script/Engine.LightmassWorldInfoSettings
// size 0x4C, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/WorldSettings.h

USTRUCT()
struct FLightmassWorldInfoSettings
{
    UPROPERTY(EditAnywhere) float StaticLightingLevelScale;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) int32 NumIndirectLightingBounces;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) int32 NumSkyLightingBounces;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float IndirectLightingQuality;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) float IndirectLightingSmoothness;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) FColor EnvironmentColor;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) float EnvironmentIntensity;  // 0x0018, size 0x4
    UPROPERTY() float EmissiveBoost;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere) float DiffuseBoost;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<EVolumeLightingMethod> VolumeLightingMethod;  // 0x0024, size 0x1
    UPROPERTY(EditAnywhere) uint8 bUseAmbientOcclusion : 1;  // 0x0025, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bGenerateAmbientOcclusionMaterialMask : 1;  // 0x0025, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bVisualizeMaterialDiffuse : 1;  // 0x0025, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bVisualizeAmbientOcclusion : 1;  // 0x0025, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bCompressLightmaps : 1;  // 0x0025, mask 0x10
    UPROPERTY(EditAnywhere) float VolumetricLightmapDetailCellSize;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) float VolumetricLightmapMaximumBrickMemoryMb;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere) float VolumetricLightmapSphericalHarmonicSmoothing;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) float VolumeLightSamplePlacementScale;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) float DirectIlluminationOcclusionFraction;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) float IndirectIlluminationOcclusionFraction;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere) float OcclusionExponent;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) float FullyOccludedSamplesFraction;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere) float MaxOcclusionDistance;  // 0x0048, size 0x4
};
