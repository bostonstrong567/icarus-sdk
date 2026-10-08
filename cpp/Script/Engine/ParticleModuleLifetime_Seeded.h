// /Script/Engine.ParticleModuleLifetime_Seeded
// Derives from: UParticleModuleLifetime > UParticleModuleLifetimeBase > UParticleModule > UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Particles/Lifetime/ParticleModuleLifetime_Seeded.h

UCLASS(EditInlineNew)
class UParticleModuleLifetime_Seeded : public UParticleModuleLifetime
{
public:
    UPROPERTY(EditAnywhere) FParticleRandomSeedInfo RandomSeedInfo;  // 0x0060, size 0x20
};
