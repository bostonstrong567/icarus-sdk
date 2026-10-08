// /Script/AudioMixer.SubmixEffectSubmixEQPreset
// Derives from: USoundEffectSubmixPreset > USoundEffectPreset > UObject
// size 0xB0, declared in Engine/Source/Runtime/AudioMixer/Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h

UCLASS(EditInlineNew)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSubmixEffectSubmixEQSettings Settings;  // 0x00A0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCritSect;  // 0x0068
    FSubmixEffectSubmixEQSettings SettingsCopy;  // 0x0090

    UFUNCTION(BlueprintCallable) void SetSettings(const FSubmixEffectSubmixEQSettings& InSettings);  // parameters 0x10
};
