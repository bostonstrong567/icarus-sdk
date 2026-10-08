// /Script/Synthesis.SubmixEffectTapDelayPreset
// Derives from: USoundEffectSubmixPreset > USoundEffectPreset > UObject
// size 0xD8, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectTapDelay.h

UCLASS(EditInlineNew)
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSubmixEffectTapDelaySettings Settings;  // 0x00A8, size 0x18

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCritSect;  // 0x0068
    FSubmixEffectTapDelaySettings SettingsCopy;  // 0x0090
    FSubmixEffectTapDelaySettings DynamicSettings;  // 0x00C0

    UFUNCTION(BlueprintCallable) void AddTap(int32& TapId);  // parameters 0x4
    UFUNCTION(BlueprintCallable) float GetMaxDelayInMilliseconds();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetTap(int32 TapId, FTapDelayInfo& TapInfo);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void GetTapIds(TArray<int32>& TapIds);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveTap(int32 TapId);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetInterpolationTime(float Time);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSettings(const FSubmixEffectTapDelaySettings& InSettings);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetTap(int32 TapId, const FTapDelayInfo& TapInfo);  // parameters 0x1C
};
