// /Script/Synthesis.SourceEffectEQPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xB0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectEQ.h

UCLASS(EditInlineNew)
class USourceEffectEQPreset : public USoundEffectSourcePreset
{
public:
    FWindowsCriticalSection SettingsCritSect;  // 0x0068, not reflected
    FSourceEffectEQSettings SettingsCopy;  // 0x0090, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSourceEffectEQSettings Settings;  // 0x00A0, size 0x10

    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectEQSettings& InSettings);  // parameters 0x10
};
