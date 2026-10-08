// /Script/AudioSynesthesia.LoudnessNRT
// Derives from: UAudioSynesthesiaNRT > UAudioAnalyzerNRT > UAudioAnalyzerAsset > UObject
// size 0x80, declared in Engine/Plugins/Runtime/AudioSynesthesia/Source/AudioSynesthesia/Classes/LoudnessNRT.h

UCLASS(EditInlineNew)
class ULoudnessNRT : public UAudioSynesthesiaNRT
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ULoudnessNRTSettings* Settings;  // 0x0078, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetChannelLoudnessAtTime(float InSeconds, int32 InChannel, float& OutLoudness) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetLoudnessAtTime(float InSeconds, float& OutLoudness) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32 InChannel, float& OutLoudness) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness) const;  // parameters 0x8
};
