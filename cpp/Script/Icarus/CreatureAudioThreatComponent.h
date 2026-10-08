// /Script/Icarus.CreatureAudioThreatComponent
// Derives from: UActorComponent > UObject
// size 0xE8, declared in Icarus/Source/Icarus/Audio/Creature/CreatureAudioThreatComponent.h

UCLASS(Config=Engine)
class UCreatureAudioThreatComponent : public UActorComponent, public IThreatAudioInterface
{
public:
    UPROPERTY() FAIAudioDataRowHandle AudioDataRow;  // 0x00B8, size 0x18
    UPROPERTY(Transient) AIcarusNPCCharacter* Creature;  // 0x00D8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    bool bIsEpicCreature;  // 0x00D0, protected
    bool bInitialised;  // 0x00D1, protected
    float LastAngryTime;  // 0x00E0, protected

    UFUNCTION() void OnCreatureDeath(UActorState* ActorState);  // parameters 0x8

    // Virtual functions that start here:
    //   GetCreatureLocation, GetMostRelevantTargetType, Initialise, IsCreatureAngry
};
