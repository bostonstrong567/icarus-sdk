// /Script/Engine.ParticleModuleColorOverLife
// Derives from: UParticleModuleColorBase > UParticleModule > UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Particles/Color/ParticleModuleColorOverLife.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleColorOverLife : public UParticleModuleColorBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector ColorOverLife;  // 0x0030, size 0x48
    UPROPERTY(EditAnywhere) FRawDistributionFloat AlphaOverLife;  // 0x0078, size 0x30
    UPROPERTY(EditAnywhere) uint8 bClampAlpha : 1;  // 0x00A8, mask 0x01
};
