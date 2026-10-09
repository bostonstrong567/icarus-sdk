// /Script/Synthesis.SourceEffectFilterPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xD0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectFilter.h

UCLASS(EditInlineNew)
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
public:
    FWindowsCriticalSection SettingsCritSect;  // 0x0068, not reflected
    FSourceEffectFilterSettings SettingsCopy;  // 0x0090, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSourceEffectFilterSettings Settings;  // 0x00B0, size 0x20

    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectFilterSettings& InSettings);  // parameters 0x20
};
