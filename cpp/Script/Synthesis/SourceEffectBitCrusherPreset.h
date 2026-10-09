// /Script/Synthesis.SourceEffectBitCrusherPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xF0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectBitCrusher.h

UCLASS(EditInlineNew)
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
public:
    FWindowsCriticalSection SettingsCritSect;  // 0x0068, not reflected
    FSourceEffectBitCrusherSettings SettingsCopy;  // 0x0090, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSourceEffectBitCrusherSettings Settings;  // 0x00C0, size 0x30

    UFUNCTION(BlueprintCallable) void SetBitModulator(USoundModulatorBase* Modulator);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetBits(float Bits);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetModulationSettings(const FSourceEffectBitCrusherSettings& ModulationSettings);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SetSampleRate(float SampleRate);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSampleRateModulator(USoundModulatorBase* Modulator);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectBitCrusherBaseSettings& Settings);  // parameters 0x8
};
