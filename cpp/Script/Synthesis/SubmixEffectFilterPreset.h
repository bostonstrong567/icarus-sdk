// /Script/Synthesis.SubmixEffectFilterPreset
// Derives from: USoundEffectSubmixPreset > USoundEffectPreset > UObject
// size 0xA8, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectFilter.h

UCLASS(EditInlineNew)
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
public:
    FWindowsCriticalSection SettingsCritSect;  // 0x0068, not reflected
    FSubmixEffectFilterSettings SettingsCopy;  // 0x0090, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSubmixEffectFilterSettings Settings;  // 0x009C, size 0xC

    UFUNCTION(BlueprintCallable) void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFilterCutoffFrequency(float InFrequency);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFilterCutoffFrequencyMod(float InFrequency);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFilterQ(float InQ);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFilterQMod(float InQ);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFilterType(ESubmixFilterType InType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSettings(const FSubmixEffectFilterSettings& InSettings);  // parameters 0xC
};
