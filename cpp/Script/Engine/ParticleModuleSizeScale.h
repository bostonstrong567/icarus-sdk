// /Script/Engine.ParticleModuleSizeScale
// Derives from: UParticleModuleSizeBase > UParticleModule > UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Particles/Size/ParticleModuleSizeScale.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleSizeScale : public UParticleModuleSizeBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector SizeScale;  // 0x0030, size 0x48
    UPROPERTY(EditAnywhere) uint8 EnableX : 1;  // 0x0078, mask 0x01
    UPROPERTY(EditAnywhere) uint8 EnableY : 1;  // 0x0078, mask 0x02
    UPROPERTY(EditAnywhere) uint8 EnableZ : 1;  // 0x0078, mask 0x04
};
