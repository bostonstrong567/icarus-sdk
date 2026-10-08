// /Script/Engine.ParticleModuleAttractorLine
// Derives from: UParticleModuleAttractorBase > UParticleModule > UObject
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/Particles/Attractor/ParticleModuleAttractorLine.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleAttractorLine : public UParticleModuleAttractorBase
{
public:
    UPROPERTY(EditAnywhere) FVector EndPoint0;  // 0x0030, size 0xC
    UPROPERTY(EditAnywhere) FVector EndPoint1;  // 0x003C, size 0xC
    UPROPERTY(EditAnywhere) FRawDistributionFloat Range;  // 0x0048, size 0x30
    UPROPERTY(EditAnywhere) FRawDistributionFloat Strength;  // 0x0078, size 0x30
};
