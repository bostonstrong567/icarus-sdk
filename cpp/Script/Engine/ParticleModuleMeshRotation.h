// /Script/Engine.ParticleModuleMeshRotation
// Derives from: UParticleModuleRotationBase > UParticleModule > UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Particles/Rotation/ParticleModuleMeshRotation.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleMeshRotation : public UParticleModuleRotationBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector StartRotation;  // 0x0030, size 0x48
    UPROPERTY(EditAnywhere) uint8 bInheritParent : 1;  // 0x0078, mask 0x01
};
