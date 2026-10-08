// /Script/Engine.ParticleModuleEventReceiverBase
// Derives from: UParticleModuleEventBase > UParticleModule > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h

UCLASS(Abstract, EditInlineNew)
class UParticleModuleEventReceiverBase : public UParticleModuleEventBase
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EParticleEventType> EventGeneratorType;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) FName EventName;  // 0x0034, size 0x8

    // Virtual functions that start here:
    //   ProcessParticleEvent, WillProcessParticleEvent
};
