// /Script/Engine.ParticleModuleRotationRate
// Derives from: UParticleModuleRotationRateBase > UParticleModule > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleRotationRate.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleRotationRate : public UParticleModuleRotationRateBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionFloat StartRotationRate;  // 0x0030, size 0x30
};
