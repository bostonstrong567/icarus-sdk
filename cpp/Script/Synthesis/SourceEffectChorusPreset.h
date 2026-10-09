// /Script/Synthesis.SourceEffectChorusPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0x180, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectChorus.h

UCLASS(EditInlineNew)
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
public:
    FWindowsCriticalSection SettingsCritSect;  // 0x0068, not reflected
    FSourceEffectChorusSettings SettingsCopy;  // 0x0090, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSourceEffectChorusSettings Settings;  // 0x0108, size 0x78

    UFUNCTION(BlueprintCallable) void SetDepth(float Depth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDepthModulator(USoundModulatorBase* Modulator);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetDry(float DryAmount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDryModulator(USoundModulatorBase* Modulator);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetFeedback(float Feedback);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFeedbackModulator(USoundModulatorBase* Modulator);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetFrequency(float Frequency);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFrequencyModulator(USoundModulatorBase* Modulator);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetModulationSettings(const FSourceEffectChorusSettings& ModulationSettings);  // parameters 0x78
    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectChorusBaseSettings& Settings);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetSpread(float Spread);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSpreadModulator(USoundModulatorBase* Modulator);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetWet(float WetAmount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetWetModulator(USoundModulatorBase* Modulator);  // parameters 0x8
};
