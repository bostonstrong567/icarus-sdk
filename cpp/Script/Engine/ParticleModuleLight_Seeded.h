// /Script/Engine.ParticleModuleLight_Seeded
// Derives from: UParticleModuleLight > UParticleModuleLightBase > UParticleModule > UObject
// size 0x140, declared in Engine/Source/Runtime/Engine/Classes/Particles/Light/ParticleModuleLight_Seeded.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleLight_Seeded : public UParticleModuleLight
{
public:
    UPROPERTY(EditAnywhere) FParticleRandomSeedInfo RandomSeedInfo;  // 0x0120, size 0x20
};
