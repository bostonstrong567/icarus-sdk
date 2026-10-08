// /Script/Synthesis.SourceEffectSimpleDelayPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xC0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectSimpleDelay.h

UCLASS(EditInlineNew)
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSourceEffectSimpleDelaySettings Settings;  // 0x00A8, size 0x18

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCritSect;  // 0x0068
    FSourceEffectSimpleDelaySettings SettingsCopy;  // 0x0090

    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectSimpleDelaySettings& InSettings);  // parameters 0x18
};
