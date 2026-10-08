// /Script/Synthesis.SourceEffectWaveShaperPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xA0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectWaveShaper.h

UCLASS(EditInlineNew)
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSourceEffectWaveShaperSettings Settings;  // 0x0098, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCritSect;  // 0x0068
    FSourceEffectWaveShaperSettings SettingsCopy;  // 0x0090

    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectWaveShaperSettings& InSettings);  // parameters 0x8
};
