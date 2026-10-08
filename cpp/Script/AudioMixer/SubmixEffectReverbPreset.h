// /Script/AudioMixer.SubmixEffectReverbPreset
// Derives from: USoundEffectSubmixPreset > USoundEffectPreset > UObject
// size 0x110, declared in Engine/Source/Runtime/AudioMixer/Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h

UCLASS(EditInlineNew)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSubmixEffectReverbSettings Settings;  // 0x00D0, size 0x40

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCritSect;  // 0x0068
    FSubmixEffectReverbSettings SettingsCopy;  // 0x0090

    UFUNCTION(BlueprintCallable) void SetSettings(const FSubmixEffectReverbSettings& InSettings);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void SetSettingsWithReverbEffect(UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);  // parameters 0x10
};
