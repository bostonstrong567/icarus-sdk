// /Script/Engine.ParticleModuleEventGenerator
// Derives from: UParticleModuleEventBase > UParticleModule > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleEventGenerator : public UParticleModuleEventBase
{
public:
    UPROPERTY(EditAnywhere) TArray<FParticleEvent_GenerateInfo> Events;  // 0x0030, size 0x10

    // Virtual functions that start here:
    //   HandleParticleBurst, HandleParticleCollision, HandleParticleKilled, HandleParticleSpawned
};
