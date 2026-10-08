// /Script/Engine.ParticleModuleAttractorPointGravity
// Derives from: UParticleModuleAttractorBase > UParticleModule > UObject
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h

UCLASS(EditInlineNew)
class UParticleModuleAttractorPointGravity : public UParticleModuleAttractorBase
{
public:
    UPROPERTY(EditAnywhere) FVector Position;  // 0x0030, size 0xC
    UPROPERTY(EditAnywhere) float Radius;  // 0x003C, size 0x4
    UPROPERTY(Instanced, Deprecated) UDistributionFloat* Strength;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere) FRawDistributionFloat StrengthRaw;  // 0x0048, size 0x30
};
