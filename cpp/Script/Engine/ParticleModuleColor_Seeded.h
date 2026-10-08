// /Script/Engine.ParticleModuleColor_Seeded
// Derives from: UParticleModuleColor > UParticleModuleColorBase > UParticleModule > UObject
// size 0xD0, declared in Engine/Source/Runtime/Engine/Classes/Particles/Color/ParticleModuleColor_Seeded.h

UCLASS(EditInlineNew)
class UParticleModuleColor_Seeded : public UParticleModuleColor
{
public:
    UPROPERTY(EditAnywhere) FParticleRandomSeedInfo RandomSeedInfo;  // 0x00B0, size 0x20
};
