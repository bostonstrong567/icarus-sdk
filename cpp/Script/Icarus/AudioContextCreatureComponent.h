// /Script/Icarus.AudioContextCreatureComponent
// Derives from: UAudioContextComponent > UActorComponent > UObject
// size 0x168, declared in Icarus/Source/Icarus/Audio/Creature/AudioContextCreatureComponent.h

UCLASS(Config=Engine)
class UAudioContextCreatureComponent : public UAudioContextComponent
{
public:
    UPROPERTY(Instanced) UCreatureAudioComponent* CreatureAudio;  // 0x0160, size 0x8
};
