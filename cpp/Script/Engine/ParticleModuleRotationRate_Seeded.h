// /Script/Engine.ParticleModuleRotationRate_Seeded
// Derives from: UParticleModuleRotationRate > UParticleModuleRotationRateBase > UParticleModule > UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleRotationRate_Seeded.h

UCLASS(EditInlineNew)
class UParticleModuleRotationRate_Seeded : public UParticleModuleRotationRate
{
public:
    UPROPERTY(EditAnywhere) FParticleRandomSeedInfo RandomSeedInfo;  // 0x0060, size 0x20
};
