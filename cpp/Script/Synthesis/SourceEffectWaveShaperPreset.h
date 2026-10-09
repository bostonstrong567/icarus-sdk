// /Script/Synthesis.SourceEffectWaveShaperPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xA0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectWaveShaper.h

UCLASS(EditInlineNew)
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
public:
    FWindowsCriticalSection SettingsCritSect;  // 0x0068, not reflected
    FSourceEffectWaveShaperSettings SettingsCopy;  // 0x0090, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSourceEffectWaveShaperSettings Settings;  // 0x0098, size 0x8

    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectWaveShaperSettings& InSettings);  // parameters 0x8
};
