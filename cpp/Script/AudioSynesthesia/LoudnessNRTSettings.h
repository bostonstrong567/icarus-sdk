// /Script/AudioSynesthesia.LoudnessNRTSettings
// Derives from: UAudioSynesthesiaNRTSettings > UAudioAnalyzerNRTSettings > UAudioAnalyzerAsset > UObject
// size 0x40, declared in Engine/Plugins/Runtime/AudioSynesthesia/Source/AudioSynesthesia/Classes/LoudnessNRT.h

UCLASS(EditInlineNew)
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float AnalysisPeriod;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinimumFrequency;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaximumFrequency;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ELoudnessNRTCurveTypeEnum CurveType;  // 0x0034, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float NoiseFloorDb;  // 0x0038, size 0x4
};
