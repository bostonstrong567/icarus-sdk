// /Script/Icarus.CreatureAudioThreatTargetTrackComponent
// Derives from: UCreatureAudioThreatComponent > UActorComponent > UObject
// size 0x138, declared in Icarus/Source/Icarus/Audio/Creature/CreatureAudioThreatTargetTrackComponent.h

UCLASS(Config=Engine)
class UCreatureAudioThreatTargetTrackComponent : public UCreatureAudioThreatComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() TMap<ECreatureAudioThreatTargetType, float> CurrentTargets;  // 0x00E8, size 0x50

    // Virtual functions that start here:
    //   GetCurrentTargetType
};
