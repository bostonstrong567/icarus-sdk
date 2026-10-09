// /Script/Synthesis.SubmixEffectStereoDelayPreset
// Derives from: USoundEffectSubmixPreset > USoundEffectPreset > UObject
// size 0xD8, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectStereoDelay.h

UCLASS(EditInlineNew)
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{
public:
    FWindowsCriticalSection SettingsCritSect;  // 0x0068, not reflected
    FSubmixEffectStereoDelaySettings SettingsCopy;  // 0x0090, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSubmixEffectStereoDelaySettings Settings;  // 0x00B4, size 0x24

    UFUNCTION(BlueprintCallable) void SetSettings(const FSubmixEffectStereoDelaySettings& InSettings);  // parameters 0x24
};
