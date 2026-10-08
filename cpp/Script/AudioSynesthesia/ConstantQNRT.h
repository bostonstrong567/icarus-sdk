// /Script/AudioSynesthesia.ConstantQNRT
// Derives from: UAudioSynesthesiaNRT > UAudioAnalyzerNRT > UAudioAnalyzerAsset > UObject
// size 0x80, declared in Engine/Plugins/Runtime/AudioSynesthesia/Source/AudioSynesthesia/Classes/ConstantQNRT.h

UCLASS(EditInlineNew)
class UConstantQNRT : public UAudioSynesthesiaNRT
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UConstantQNRTSettings* Settings;  // 0x0078, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetChannelConstantQAtTime(float InSeconds, int32 InChannel, TArray<float>& OutConstantQ) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetNormalizedChannelConstantQAtTime(float InSeconds, int32 InChannel, TArray<float>& OutConstantQ) const;  // parameters 0x18
};
