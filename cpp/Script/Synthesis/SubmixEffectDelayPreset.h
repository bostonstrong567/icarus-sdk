// /Script/Synthesis.SubmixEffectDelayPreset
// Derives from: USoundEffectSubmixPreset > USoundEffectPreset > UObject
// size 0xB8, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectDelay.h

UCLASS(EditInlineNew)
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSubmixEffectDelaySettings Settings;  // 0x009C, size 0xC
    UPROPERTY(Transient) FSubmixEffectDelaySettings DynamicSettings;  // 0x00A8, size 0xC

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCritSect;  // 0x0068
    FSubmixEffectDelaySettings SettingsCopy;  // 0x0090

    UFUNCTION(BlueprintCallable) float GetMaxDelayInMilliseconds();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDelay(float Length);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetInterpolationTime(float Time);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSettings(const FSubmixEffectDelaySettings& InSettings);  // parameters 0xC
};
