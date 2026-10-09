// /Script/Icarus.CreatureAudioThreatComponent
// Derives from: UActorComponent > UObject
// size 0xE8, declared in Icarus/Source/Icarus/Audio/Creature/CreatureAudioThreatComponent.h

UCLASS(Config=Engine)
class UCreatureAudioThreatComponent : public UActorComponent, public IThreatAudioInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() FAIAudioDataRowHandle AudioDataRow;  // 0x00B8, size 0x18
    bool bIsEpicCreature;  // 0x00D0, not reflected
    bool bInitialised;  // 0x00D1, not reflected
    UPROPERTY(Transient) AIcarusNPCCharacter* Creature;  // 0x00D8, size 0x8
    float LastAngryTime;  // 0x00E0, not reflected
public:
    UFUNCTION() void OnCreatureDeath(UActorState* ActorState);  // parameters 0x8

    // Virtual functions that start here:
    //   GetCreatureLocation, GetMostRelevantTargetType, Initialise, IsCreatureAngry
};
