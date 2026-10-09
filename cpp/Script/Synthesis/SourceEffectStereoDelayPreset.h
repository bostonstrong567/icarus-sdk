// /Script/Synthesis.SourceEffectStereoDelayPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xD8, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectStereoDelay.h

UCLASS(EditInlineNew)
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
public:
    FWindowsCriticalSection SettingsCritSect;  // 0x0068, not reflected
    FSourceEffectStereoDelaySettings SettingsCopy;  // 0x0090, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSourceEffectStereoDelaySettings Settings;  // 0x00B4, size 0x24

    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectStereoDelaySettings& InSettings);  // parameters 0x24
};
