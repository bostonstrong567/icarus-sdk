// /Script/Engine.ParticleModuleMeshRotationRateMultiplyLife
// Derives from: UParticleModuleRotationRateBase > UParticleModule > UObject
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleMeshRotationRateMultiplyLife.h

UCLASS(EditInlineNew)
class UParticleModuleMeshRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector LifeMultiplier;  // 0x0030, size 0x48
};
