// /Script/Synthesis.SubmixEffectMultibandCompressorPreset
// Derives from: USoundEffectSubmixPreset > USoundEffectPreset > UObject
// size 0xD0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h

UCLASS(EditInlineNew)
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{
public:
    FWindowsCriticalSection SettingsCritSect;  // 0x0068, not reflected
    FSubmixEffectMultibandCompressorSettings SettingsCopy;  // 0x0090, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSubmixEffectMultibandCompressorSettings Settings;  // 0x00B0, size 0x20

    UFUNCTION(BlueprintCallable) void SetSettings(const FSubmixEffectMultibandCompressorSettings& InSettings);  // parameters 0x20
};
