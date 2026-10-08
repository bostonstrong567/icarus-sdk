// /Script/Synthesis.SubmixEffectFlexiverbPreset
// Derives from: USoundEffectSubmixPreset > USoundEffectPreset > UObject
// size 0xB0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectFlexiverb.h

UCLASS(EditInlineNew)
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSubmixEffectFlexiverbSettings Settings;  // 0x00A0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCritSect;  // 0x0068
    FSubmixEffectFlexiverbSettings SettingsCopy;  // 0x0090

    UFUNCTION(BlueprintCallable) void SetSettings(const FSubmixEffectFlexiverbSettings& InSettings);  // parameters 0x10
};
