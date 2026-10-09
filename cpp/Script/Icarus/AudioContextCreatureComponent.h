// /Script/Icarus.AudioContextCreatureComponent
// Derives from: UAudioContextComponent > UActorComponent > UObject
// size 0x168, declared in Icarus/Source/Icarus/Audio/Creature/AudioContextCreatureComponent.h

UCLASS(Config=Engine)
class UAudioContextCreatureComponent : public UAudioContextComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Instanced) UCreatureAudioComponent* CreatureAudio;  // 0x0160, size 0x8
};
