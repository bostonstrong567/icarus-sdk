// /Script/Engine.ParticleModuleSize
// Derives from: UParticleModuleSizeBase > UParticleModule > UObject
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Particles/Size/ParticleModuleSize.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleSize : public UParticleModuleSizeBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector StartSize;  // 0x0030, size 0x48
};
