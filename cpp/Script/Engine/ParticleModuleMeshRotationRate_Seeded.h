// /Script/Engine.ParticleModuleMeshRotationRate_Seeded
// Derives from: UParticleModuleMeshRotationRate > UParticleModuleRotationRateBase > UParticleModule > UObject
// size 0x98, declared in Engine/Source/Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleMeshRotationRate_Seeded.h

UCLASS(EditInlineNew)
class UParticleModuleMeshRotationRate_Seeded : public UParticleModuleMeshRotationRate
{
public:
    UPROPERTY(EditAnywhere) FParticleRandomSeedInfo RandomSeedInfo;  // 0x0078, size 0x20
};
