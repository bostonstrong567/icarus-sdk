// /Script/Engine.ParticleModuleLocationPrimitiveSphere_Seeded
// Derives from: UParticleModuleLocationPrimitiveSphere > UParticleModuleLocationPrimitiveBase > UParticleModuleLocationBase > UParticleModule > UObject
// size 0x100, declared in Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationPrimitiveSphere_Seeded.h

UCLASS(EditInlineNew)
class UParticleModuleLocationPrimitiveSphere_Seeded : public UParticleModuleLocationPrimitiveSphere
{
public:
    UPROPERTY(EditAnywhere) FParticleRandomSeedInfo RandomSeedInfo;  // 0x00E0, size 0x20
};
