// /Script/Synthesis.SubmixEffectConvolutionReverbSettings
// size 0x28, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectConvolutionReverb.h

USTRUCT()
struct FSubmixEffectConvolutionReverbSettings
{
    UPROPERTY() float NormalizationVolumeDb;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bBypass;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bMixInputChannelFormatToImpulseResponseFormat;  // 0x0005, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bMixReverbOutputToOutputChannelFormat;  // 0x0006, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SurroundRearChannelBleedDb;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bInvertRearChannelBleedPhase;  // 0x000C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSurroundRearChannelFlip;  // 0x000D, size 0x1
    UPROPERTY(Deprecated) float SurroundRearChannelBleedAmount;  // 0x0010, size 0x4
    UPROPERTY(Deprecated) UAudioImpulseResponse* ImpulseResponse;  // 0x0018, size 0x8
    UPROPERTY(Deprecated) bool AllowHardwareAcceleration;  // 0x0020, size 0x1
};
