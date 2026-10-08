// /Script/Engine.ParticleModuleAccelerationOverLifetime
// Derives from: UParticleModuleAccelerationBase > UParticleModule > UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationOverLifetime.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleAccelerationOverLifetime : public UParticleModuleAccelerationBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector AccelOverLife;  // 0x0038, size 0x48
};
