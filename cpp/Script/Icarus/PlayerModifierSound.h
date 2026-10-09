// /Script/Icarus.PlayerModifierSound
// Derives from: UObject
// size 0x58, declared in Icarus/Source/Icarus/Audio/Player/PlayerModifierSound.h

UCLASS()
class UPlayerModifierSound : public UObject
{
private:
    FModifierStateAudioDataRowHandle ModifierAudioData;  // 0x0028, not reflected
    FMOD::Studio::EventInstance * LoopEventInstance;  // 0x0040, not reflected
    int32 ModifierCount;  // 0x0048, not reflected
    float CooldownEndTime;  // 0x004C, not reflected
    bool bIsForceStopping;  // 0x0050, not reflected
};
