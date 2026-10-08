// /Script/Engine.ParticleModuleColorScaleOverLife
// Derives from: UParticleModuleColorBase > UParticleModule > UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Particles/Color/ParticleModuleColorScaleOverLife.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleColorScaleOverLife : public UParticleModuleColorBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector ColorScaleOverLife;  // 0x0030, size 0x48
    UPROPERTY(EditAnywhere) FRawDistributionFloat AlphaScaleOverLife;  // 0x0078, size 0x30
    UPROPERTY(EditAnywhere) uint8 bEmitterTime : 1;  // 0x00A8, mask 0x01
};
