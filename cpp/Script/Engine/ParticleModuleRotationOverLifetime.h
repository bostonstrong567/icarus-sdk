// /Script/Engine.ParticleModuleRotationOverLifetime
// Derives from: UParticleModuleRotationBase > UParticleModule > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Particles/Rotation/ParticleModuleRotationOverLifetime.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleRotationOverLifetime : public UParticleModuleRotationBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionFloat RotationOverLife;  // 0x0030, size 0x30
    UPROPERTY(EditAnywhere) uint8 Scale : 1;  // 0x0060, mask 0x01
};
