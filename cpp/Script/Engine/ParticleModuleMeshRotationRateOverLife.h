// /Script/Engine.ParticleModuleMeshRotationRateOverLife
// Derives from: UParticleModuleRotationRateBase > UParticleModule > UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h

UCLASS(EditInlineNew)
class UParticleModuleMeshRotationRateOverLife : public UParticleModuleRotationRateBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector RotRate;  // 0x0030, size 0x48
    UPROPERTY(EditAnywhere) uint8 bScaleRotRate : 1;  // 0x0078, mask 0x01
};
