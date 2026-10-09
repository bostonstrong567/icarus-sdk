// /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset
// Derives from: USoundEffectSubmixPreset > USoundEffectPreset > UObject
// size 0x150, declared in Engine/Source/Runtime/AudioMixer/Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h

UCLASS(EditInlineNew)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
    FWindowsCriticalSection SettingsCritSect;  // 0x0068, not reflected
    FSubmixEffectDynamicsProcessorSettings SettingsCopy;  // 0x0090, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSubmixEffectDynamicsProcessorSettings Settings;  // 0x00F0, size 0x60

    UFUNCTION(BlueprintCallable) void ResetKey();
    UFUNCTION(BlueprintCallable) void SetAudioBus(UAudioBus* AudioBus);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetExternalSubmix(USoundSubmix* Submix);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetSettings(const FSubmixEffectDynamicsProcessorSettings& Settings);  // parameters 0x60
};
