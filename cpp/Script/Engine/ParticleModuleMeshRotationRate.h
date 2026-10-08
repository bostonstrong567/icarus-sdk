// /Script/Engine.ParticleModuleMeshRotationRate
// Derives from: UParticleModuleRotationRateBase > UParticleModule > UObject
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleMeshRotationRate.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleMeshRotationRate : public UParticleModuleRotationRateBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector StartRotationRate;  // 0x0030, size 0x48
};
