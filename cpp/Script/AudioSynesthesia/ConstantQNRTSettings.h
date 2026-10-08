// /Script/AudioSynesthesia.ConstantQNRTSettings
// Derives from: UAudioSynesthesiaNRTSettings > UAudioAnalyzerNRTSettings > UAudioAnalyzerAsset > UObject
// size 0x48, declared in Engine/Plugins/Runtime/AudioSynesthesia/Source/AudioSynesthesia/Classes/ConstantQNRT.h

UCLASS(EditInlineNew)
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float StartingFrequency;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 NumBands;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float NumBandsPerOctave;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float AnalysisPeriod;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bDownmixToMono;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EConstantQFFTSizeEnum FFTSize;  // 0x0039, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EFFTWindowType WindowType;  // 0x003A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EAudioSpectrumType SpectrumType;  // 0x003B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float BandWidthStretch;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EConstantQNormalizationEnum CQTNormalization;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float NoiseFloorDb;  // 0x0044, size 0x4
};
