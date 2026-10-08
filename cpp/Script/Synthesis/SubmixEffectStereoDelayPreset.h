// /Script/Synthesis.SubmixEffectStereoDelayPreset
// Derives from: USoundEffectSubmixPreset > USoundEffectPreset > UObject
// size 0xD8, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectStereoDelay.h

UCLASS(EditInlineNew)
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSubmixEffectStereoDelaySettings Settings;  // 0x00B4, size 0x24

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCritSect;  // 0x0068
    FSubmixEffectStereoDelaySettings SettingsCopy;  // 0x0090

    UFUNCTION(BlueprintCallable) void SetSettings(const FSubmixEffectStereoDelaySettings& InSettings);  // parameters 0x24
};
