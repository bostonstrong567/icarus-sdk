// /Script/Engine.ParticleModuleVelocity
// Derives from: UParticleModuleVelocityBase > UParticleModule > UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Particles/Velocity/ParticleModuleVelocity.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleVelocity : public UParticleModuleVelocityBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector StartVelocity;  // 0x0038, size 0x48
    UPROPERTY(EditAnywhere) FRawDistributionFloat StartVelocityRadial;  // 0x0080, size 0x30
};
