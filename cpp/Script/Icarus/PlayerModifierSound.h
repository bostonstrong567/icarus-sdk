// /Script/Icarus.PlayerModifierSound
// Derives from: UObject
// size 0x58, declared in Icarus/Source/Icarus/Audio/Player/PlayerModifierSound.h

UCLASS()
class UPlayerModifierSound : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FModifierStateAudioDataRowHandle ModifierAudioData;  // 0x0028, private
    FMOD::Studio::EventInstance * LoopEventInstance;  // 0x0040, private
    int32 ModifierCount;  // 0x0048, private
    float CooldownEndTime;  // 0x004C, private
    bool bIsForceStopping;  // 0x0050, private
};
