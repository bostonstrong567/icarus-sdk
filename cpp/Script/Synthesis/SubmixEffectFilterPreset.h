// /Script/Synthesis.SubmixEffectFilterPreset
// Derives from: USoundEffectSubmixPreset > USoundEffectPreset > UObject
// size 0xA8, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectFilter.h

UCLASS(EditInlineNew)
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSubmixEffectFilterSettings Settings;  // 0x009C, size 0xC

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCritSect;  // 0x0068
    FSubmixEffectFilterSettings SettingsCopy;  // 0x0090

    UFUNCTION(BlueprintCallable) void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFilterCutoffFrequency(float InFrequency);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFilterCutoffFrequencyMod(float InFrequency);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFilterQ(float InQ);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFilterQMod(float InQ);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFilterType(ESubmixFilterType InType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSettings(const FSubmixEffectFilterSettings& InSettings);  // parameters 0xC
};
