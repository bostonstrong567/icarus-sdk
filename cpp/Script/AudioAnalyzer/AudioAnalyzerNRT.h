// /Script/AudioAnalyzer.AudioAnalyzerNRT
// Derives from: UAudioAnalyzerAsset > UObject
// size 0x78, declared in Engine/Source/Runtime/AudioAnalyzer/Classes/AudioAnalyzerNRT.h

UCLASS(Abstract, EditInlineNew)
class UAudioAnalyzerNRT : public UAudioAnalyzerAsset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) USoundWave* Sound;  // 0x0028, size 0x8
    UPROPERTY(BlueprintReadOnly) float DurationInSeconds;  // 0x0030, size 0x4
private:
    TSharedPtr<Audio::IAnalyzerNRTResult,1> Result;  // 0x0038, not reflected
    FWindowsCriticalSection ResultCriticalSection;  // 0x0048, not reflected
    TAtomic<int> CurrentResultId;  // 0x0070, not reflected

    // Virtual functions that start here:
    //   GetAnalyzerNRTFactoryName, GetSettings
};
