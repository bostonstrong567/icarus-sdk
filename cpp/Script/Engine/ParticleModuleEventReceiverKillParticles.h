// /Script/Engine.ParticleModuleEventReceiverKillParticles
// Derives from: UParticleModuleEventReceiverBase > UParticleModuleEventBase > UParticleModule > UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverKillParticles.h

UCLASS(EditInlineNew)
class UParticleModuleEventReceiverKillParticles : public UParticleModuleEventReceiverBase
{
public:
    UPROPERTY(EditAnywhere) uint8 bStopSpawning : 1;  // 0x0040, mask 0x01
};
