// /Script/Engine.ParticleModuleColor
// Derives from: UParticleModuleColorBase > UParticleModule > UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Particles/Color/ParticleModuleColor.h

UCLASS(EditInlineNew)
class UParticleModuleColor : public UParticleModuleColorBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector StartColor;  // 0x0030, size 0x48
    UPROPERTY(EditAnywhere) FRawDistributionFloat StartAlpha;  // 0x0078, size 0x30
    UPROPERTY(EditAnywhere) uint8 bClampAlpha : 1;  // 0x00A8, mask 0x01
};
