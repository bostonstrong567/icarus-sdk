// /Script/Synthesis.SourceEffectMidSideSpreaderPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xA0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectMidSideSpreader.h

UCLASS(EditInlineNew)
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{
public:
    FWindowsCriticalSection SettingsCritSect;  // 0x0068, not reflected
    FSourceEffectMidSideSpreaderSettings SettingsCopy;  // 0x0090, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSourceEffectMidSideSpreaderSettings Settings;  // 0x0098, size 0x8

    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectMidSideSpreaderSettings& InSettings);  // parameters 0x8
};
