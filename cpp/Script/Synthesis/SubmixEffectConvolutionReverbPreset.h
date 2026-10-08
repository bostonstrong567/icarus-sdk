// /Script/Synthesis.SubmixEffectConvolutionReverbPreset
// Derives from: USoundEffectSubmixPreset > USoundEffectPreset > UObject
// size 0xF0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectConvolutionReverb.h

UCLASS(EditInlineNew)
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAudioImpulseResponse* ImpulseResponse;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSubmixEffectConvolutionReverbSettings Settings;  // 0x0070, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ESubmixEffectConvolutionReverbBlockSize BlockSize;  // 0x0098, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bEnableHardwareAcceleration;  // 0x0099, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCritSect;  // 0x00A0, private
    FSubmixEffectConvolutionReverbSettings SettingsCopy;  // 0x00C8, private

    UFUNCTION(BlueprintCallable) void SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetSettings(const FSubmixEffectConvolutionReverbSettings& InSettings);  // parameters 0x28
};
