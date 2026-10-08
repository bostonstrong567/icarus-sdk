// /Script/Synthesis.AudioImpulseResponse
// Derives from: UObject
// size 0x58, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectConvolutionReverb.h

UCLASS()
class UAudioImpulseResponse : public UObject
{
public:
    UPROPERTY() TArray<float> ImpulseResponse;  // 0x0028, size 0x10
    UPROPERTY() int32 NumChannels;  // 0x0038, size 0x4
    UPROPERTY() int32 SampleRate;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float NormalizationVolumeDb;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bTrueStereo;  // 0x0044, size 0x1
    UPROPERTY(Deprecated) TArray<float> IRData;  // 0x0048, size 0x10
};
