// /Script/Engine.ParticleModuleVelocityInheritParent
// Derives from: UParticleModuleVelocityBase > UParticleModule > UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Particles/Velocity/ParticleModuleVelocityInheritParent.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleVelocityInheritParent : public UParticleModuleVelocityBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector Scale;  // 0x0038, size 0x48
};
