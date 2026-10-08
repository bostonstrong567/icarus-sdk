// /Script/Engine.ParticleModuleRotation_Seeded
// Derives from: UParticleModuleRotation > UParticleModuleRotationBase > UParticleModule > UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Particles/Rotation/ParticleModuleRotation_Seeded.h

UCLASS(EditInlineNew)
class UParticleModuleRotation_Seeded : public UParticleModuleRotation
{
public:
    UPROPERTY(EditAnywhere) FParticleRandomSeedInfo RandomSeedInfo;  // 0x0060, size 0x20
};
