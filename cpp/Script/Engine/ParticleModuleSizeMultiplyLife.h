// /Script/Engine.ParticleModuleSizeMultiplyLife
// Derives from: UParticleModuleSizeBase > UParticleModule > UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleSizeMultiplyLife : public UParticleModuleSizeBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector LifeMultiplier;  // 0x0030, size 0x48
    UPROPERTY(EditAnywhere) uint8 MultiplyX : 1;  // 0x0078, mask 0x01
    UPROPERTY(EditAnywhere) uint8 MultiplyY : 1;  // 0x0078, mask 0x02
    UPROPERTY(EditAnywhere) uint8 MultiplyZ : 1;  // 0x0078, mask 0x04
};
