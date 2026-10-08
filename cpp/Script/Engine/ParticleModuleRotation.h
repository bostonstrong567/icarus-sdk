// /Script/Engine.ParticleModuleRotation
// Derives from: UParticleModuleRotationBase > UParticleModule > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Particles/Rotation/ParticleModuleRotation.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleRotation : public UParticleModuleRotationBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionFloat StartRotation;  // 0x0030, size 0x30
};
