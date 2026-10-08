// /Script/Engine.ParticleModuleBeamNoise
// Derives from: UParticleModuleBeamBase > UParticleModule > UObject
// size 0x190, declared in Engine/Source/Runtime/Engine/Classes/Particles/Beam/ParticleModuleBeamNoise.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleBeamNoise : public UParticleModuleBeamBase
{
public:
    UPROPERTY(EditAnywhere) uint8 bLowFreq_Enabled : 1;  // 0x0030, mask 0x01
    UPROPERTY(EditAnywhere) int32 Frequency;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) int32 Frequency_LowRange;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) FRawDistributionVector NoiseRange;  // 0x0040, size 0x48
    UPROPERTY(EditAnywhere) FRawDistributionFloat NoiseRangeScale;  // 0x0088, size 0x30
    UPROPERTY(EditAnywhere) uint8 bNRScaleEmitterTime : 1;  // 0x00B8, mask 0x01
    UPROPERTY(EditAnywhere) FRawDistributionVector NoiseSpeed;  // 0x00C0, size 0x48
    UPROPERTY(EditAnywhere) uint8 bSmooth : 1;  // 0x0108, mask 0x01
    UPROPERTY(EditAnywhere) float NoiseLockRadius;  // 0x010C, size 0x4
    UPROPERTY() uint8 bNoiseLock : 1;  // 0x0110, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOscillate : 1;  // 0x0110, mask 0x02
    UPROPERTY(EditAnywhere) float NoiseLockTime;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere) float NoiseTension;  // 0x0118, size 0x4
    UPROPERTY(EditAnywhere) uint8 bUseNoiseTangents : 1;  // 0x011C, mask 0x01
    UPROPERTY(EditAnywhere) FRawDistributionFloat NoiseTangentStrength;  // 0x0120, size 0x30
    UPROPERTY(EditAnywhere) int32 NoiseTessellation;  // 0x0150, size 0x4
    UPROPERTY(EditAnywhere) uint8 bTargetNoise : 1;  // 0x0154, mask 0x01
    UPROPERTY(EditAnywhere) float FrequencyDistance;  // 0x0158, size 0x4
    UPROPERTY(EditAnywhere) uint8 bApplyNoiseScale : 1;  // 0x015C, mask 0x01
    UPROPERTY(EditAnywhere) FRawDistributionFloat NoiseScale;  // 0x0160, size 0x30
};
