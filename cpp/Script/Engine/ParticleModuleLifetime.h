// /Script/Engine.ParticleModuleLifetime
// Derives from: UParticleModuleLifetimeBase > UParticleModule > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Particles/Lifetime/ParticleModuleLifetime.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleLifetime : public UParticleModuleLifetimeBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionFloat Lifetime;  // 0x0030, size 0x30
};
