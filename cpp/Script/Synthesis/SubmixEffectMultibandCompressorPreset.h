// /Script/Synthesis.SubmixEffectMultibandCompressorPreset
// Derives from: USoundEffectSubmixPreset > USoundEffectPreset > UObject
// size 0xD0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h

UCLASS(EditInlineNew)
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSubmixEffectMultibandCompressorSettings Settings;  // 0x00B0, size 0x20

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCritSect;  // 0x0068
    FSubmixEffectMultibandCompressorSettings SettingsCopy;  // 0x0090

    UFUNCTION(BlueprintCallable) void SetSettings(const FSubmixEffectMultibandCompressorSettings& InSettings);  // parameters 0x20
};
