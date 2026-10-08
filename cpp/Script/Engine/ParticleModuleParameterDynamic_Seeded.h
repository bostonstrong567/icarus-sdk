// /Script/Engine.ParticleModuleParameterDynamic_Seeded
// Derives from: UParticleModuleParameterDynamic > UParticleModuleParameterBase > UParticleModule > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Particles/Parameter/ParticleModuleParameterDynamic_Seeded.h

UCLASS(EditInlineNew)
class UParticleModuleParameterDynamic_Seeded : public UParticleModuleParameterDynamic
{
public:
    UPROPERTY(EditAnywhere) FParticleRandomSeedInfo RandomSeedInfo;  // 0x0048, size 0x20
};
