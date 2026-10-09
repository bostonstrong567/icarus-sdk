// /Script/Synthesis.SubmixEffectDelayPreset
// Derives from: USoundEffectSubmixPreset > USoundEffectPreset > UObject
// size 0xB8, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectDelay.h

UCLASS(EditInlineNew)
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
public:
    FWindowsCriticalSection SettingsCritSect;  // 0x0068, not reflected
    FSubmixEffectDelaySettings SettingsCopy;  // 0x0090, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSubmixEffectDelaySettings Settings;  // 0x009C, size 0xC
    UPROPERTY(Transient) FSubmixEffectDelaySettings DynamicSettings;  // 0x00A8, size 0xC

    UFUNCTION(BlueprintCallable) float GetMaxDelayInMilliseconds();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDelay(float Length);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetInterpolationTime(float Time);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSettings(const FSubmixEffectDelaySettings& InSettings);  // parameters 0xC
};
