// /Script/Engine.ParticleModuleLight
// Derives from: UParticleModuleLightBase > UParticleModule > UObject
// size 0x120, declared in Engine/Source/Runtime/Engine/Classes/Particles/Light/ParticleModuleLight.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleLight : public UParticleModuleLightBase
{
public:
    UPROPERTY(EditAnywhere) bool bUseInverseSquaredFalloff;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) bool bAffectsTranslucency;  // 0x0031, size 0x1
    UPROPERTY(EditAnywhere, Transient) bool bPreviewLightRadius;  // 0x0032, size 0x1
    UPROPERTY(EditAnywhere) float SpawnFraction;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) FRawDistributionVector ColorScaleOverLife;  // 0x0038, size 0x48
    UPROPERTY(EditAnywhere) FRawDistributionFloat BrightnessOverLife;  // 0x0080, size 0x30
    UPROPERTY(EditAnywhere) FRawDistributionFloat RadiusScale;  // 0x00B0, size 0x30
    UPROPERTY(EditAnywhere) FRawDistributionFloat LightExponent;  // 0x00E0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLightingChannels LightingChannels;  // 0x0110, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float VolumetricScatteringIntensity;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere) bool bHighQualityLights;  // 0x0118, size 0x1
    UPROPERTY(EditAnywhere) bool bShadowCastingLights;  // 0x0119, size 0x1
};
