// /Script/Synthesis.SubmixEffectMultibandCompressorSettings
// size 0x20, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h

USTRUCT()
struct FSubmixEffectMultibandCompressorSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESubmixEffectDynamicsProcessorType DynamicsProcessorType;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESubmixEffectDynamicsPeakMode PeakMode;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAheadMsec;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLinkChannels;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAnalogMode;  // 0x0009, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bFourPole;  // 0x000A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDynamicsBandSettings> Bands;  // 0x0010, size 0x10
};
