// /Script/Engine.ParticleModuleOrbitBase
// Derives from: UParticleModule > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h

UCLASS(Abstract, EditInlineNew)
class UParticleModuleOrbitBase : public UParticleModule
{
public:
    UPROPERTY(EditAnywhere) uint8 bUseEmitterTime : 1;  // 0x0030, mask 0x01
};
