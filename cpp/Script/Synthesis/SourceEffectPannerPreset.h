// /Script/Synthesis.SourceEffectPannerPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xA0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectPanner.h

UCLASS(EditInlineNew)
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
public:
    FWindowsCriticalSection SettingsCritSect;  // 0x0068, not reflected
    FSourceEffectPannerSettings SettingsCopy;  // 0x0090, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSourceEffectPannerSettings Settings;  // 0x0098, size 0x8

    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectPannerSettings& InSettings);  // parameters 0x8
};
