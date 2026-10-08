// /Script/Engine.ParticleModuleLocationWorldOffset_Seeded
// Derives from: UParticleModuleLocationWorldOffset > UParticleModuleLocation > UParticleModuleLocationBase > UParticleModule > UObject
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationWorldOffset_Seeded.h

UCLASS(EditInlineNew)
class UParticleModuleLocationWorldOffset_Seeded : public UParticleModuleLocationWorldOffset
{
public:
    UPROPERTY(EditAnywhere) FParticleRandomSeedInfo RandomSeedInfo;  // 0x0080, size 0x20
};
