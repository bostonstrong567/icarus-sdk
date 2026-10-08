// /Script/Engine.ParticleModuleVelocityOverLifetime
// Derives from: UParticleModuleVelocityBase > UParticleModule > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Particles/Velocity/ParticleModuleVelocityOverLifetime.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleVelocityOverLifetime : public UParticleModuleVelocityBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector VelOverLife;  // 0x0038, size 0x48
    UPROPERTY(EditAnywhere) uint8 Absolute : 1;  // 0x0080, mask 0x01
};
