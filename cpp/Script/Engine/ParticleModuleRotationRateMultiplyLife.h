// /Script/Engine.ParticleModuleRotationRateMultiplyLife
// Derives from: UParticleModuleRotationRateBase > UParticleModule > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleRotationRateMultiplyLife.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionFloat LifeMultiplier;  // 0x0030, size 0x30
};
