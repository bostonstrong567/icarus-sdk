// /Script/AudioSynesthesia.OnsetNRT
// Derives from: UAudioSynesthesiaNRT > UAudioAnalyzerNRT > UAudioAnalyzerAsset > UObject
// size 0x80, declared in Engine/Plugins/Runtime/AudioSynesthesia/Source/AudioSynesthesia/Classes/OnsetNRT.h

UCLASS(EditInlineNew)
class UOnsetNRT : public UAudioSynesthesiaNRT
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UOnsetNRTSettings* Settings;  // 0x0078, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32 InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32 InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths) const;  // parameters 0x30
};
