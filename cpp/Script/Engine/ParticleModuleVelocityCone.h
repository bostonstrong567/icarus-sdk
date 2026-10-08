// /Script/Engine.ParticleModuleVelocityCone
// Derives from: UParticleModuleVelocityBase > UParticleModule > UObject
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/Particles/Velocity/ParticleModuleVelocityCone.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleVelocityCone : public UParticleModuleVelocityBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionFloat Angle;  // 0x0038, size 0x30
    UPROPERTY(EditAnywhere) FRawDistributionFloat Velocity;  // 0x0068, size 0x30
    UPROPERTY(EditAnywhere) FVector Direction;  // 0x0098, size 0xC
};
