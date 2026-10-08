// /Script/Engine.ParticleModuleLocation_Seeded
// Derives from: UParticleModuleLocation > UParticleModuleLocationBase > UParticleModule > UObject
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocation_Seeded.h

UCLASS(EditInlineNew)
class UParticleModuleLocation_Seeded : public UParticleModuleLocation
{
public:
    UPROPERTY(EditAnywhere) FParticleRandomSeedInfo RandomSeedInfo;  // 0x0080, size 0x20
};
