// /Script/Engine.ParticleModuleMeshRotation_Seeded
// Derives from: UParticleModuleMeshRotation > UParticleModuleRotationBase > UParticleModule > UObject
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/Particles/Rotation/ParticleModuleMeshRotation_Seeded.h

UCLASS(EditInlineNew)
class UParticleModuleMeshRotation_Seeded : public UParticleModuleMeshRotation
{
public:
    UPROPERTY(EditAnywhere) FParticleRandomSeedInfo RandomSeedInfo;  // 0x0080, size 0x20
};
