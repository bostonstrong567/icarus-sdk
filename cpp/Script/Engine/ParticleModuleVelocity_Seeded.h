// /Script/Engine.ParticleModuleVelocity_Seeded
// Derives from: UParticleModuleVelocity > UParticleModuleVelocityBase > UParticleModule > UObject
// size 0xD0, declared in Engine/Source/Runtime/Engine/Classes/Particles/Velocity/ParticleModuleVelocity_Seeded.h

UCLASS(EditInlineNew)
class UParticleModuleVelocity_Seeded : public UParticleModuleVelocity
{
public:
    UPROPERTY(EditAnywhere) FParticleRandomSeedInfo RandomSeedInfo;  // 0x00B0, size 0x20
};
