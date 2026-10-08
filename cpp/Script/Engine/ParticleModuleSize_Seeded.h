// /Script/Engine.ParticleModuleSize_Seeded
// Derives from: UParticleModuleSize > UParticleModuleSizeBase > UParticleModule > UObject
// size 0x98, declared in Engine/Source/Runtime/Engine/Classes/Particles/Size/ParticleModuleSize_Seeded.h

UCLASS(EditInlineNew)
class UParticleModuleSize_Seeded : public UParticleModuleSize
{
public:
    UPROPERTY(EditAnywhere) FParticleRandomSeedInfo RandomSeedInfo;  // 0x0078, size 0x20
};
