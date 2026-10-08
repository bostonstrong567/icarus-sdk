// /Script/Synthesis.SourceEffectPannerPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xA0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectPanner.h

UCLASS(EditInlineNew)
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSourceEffectPannerSettings Settings;  // 0x0098, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCritSect;  // 0x0068
    FSourceEffectPannerSettings SettingsCopy;  // 0x0090

    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectPannerSettings& InSettings);  // parameters 0x8
};
