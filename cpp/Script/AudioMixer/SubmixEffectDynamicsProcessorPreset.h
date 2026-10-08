// /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset
// Derives from: USoundEffectSubmixPreset > USoundEffectPreset > UObject
// size 0x150, declared in Engine/Source/Runtime/AudioMixer/Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h

UCLASS(EditInlineNew)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSubmixEffectDynamicsProcessorSettings Settings;  // 0x00F0, size 0x60

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCritSect;  // 0x0068
    FSubmixEffectDynamicsProcessorSettings SettingsCopy;  // 0x0090

    UFUNCTION(BlueprintCallable) void ResetKey();
    UFUNCTION(BlueprintCallable) void SetAudioBus(UAudioBus* AudioBus);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetExternalSubmix(USoundSubmix* Submix);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetSettings(const FSubmixEffectDynamicsProcessorSettings& Settings);  // parameters 0x60
};
