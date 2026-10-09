// /Script/Engine.SoundSubmix
// Derives from: USoundSubmixWithParentBase > USoundSubmixBase > UObject
// size 0xC0, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundSubmix.h

UCLASS(EditInlineNew, Config=Engine)
class USoundSubmix : public USoundSubmixWithParentBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bMuteWhenBackgrounded : 1;  // 0x0040, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<USoundEffectSubmixPreset*> SubmixEffectChain;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundfieldEncodingSettingsBase* AmbisonicsPluginSettings;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EnvelopeFollowerAttackTime;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EnvelopeFollowerReleaseTime;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere) EGainParamMode GainMode;  // 0x0068, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OutputVolume;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WetLevel;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DryLevel;  // 0x0074, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundModulationDestinationSettings OutputVolumeModulation;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundModulationDestinationSettings WetLevelModulation;  // 0x0088, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundModulationDestinationSettings DryLevelModulation;  // 0x0098, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSubmixRecordedFileDone OnSubmixRecordedFileDone;  // 0x00A8, size 0x10
protected:
    TUniquePtr<Audio::FAudioRecordingData,TDefaultDelete<Audio::FAudioRecordingData> > RecordingData;  // 0x00B8, not reflected
public:
    UFUNCTION(BlueprintCallable) void AddEnvelopeFollowerDelegate(UObject* WorldContextObject, const FOnSubmixEnvelopeBP& OnSubmixEnvelopeBP);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void AddSpectralAnalysisDelegate(UObject* WorldContextObject, const TArray<FSoundSubmixSpectralAnalysisBandSettings>& InBandSettings, const FOnSubmixSpectralAnalysisBP& OnSubmixSpectralAnalysisBP, float UpdateRate, float DecibelNoiseFloor, bool bDoNormalize, bool bDoAutoRange, float AutoRangeAttackTime, float AutoRangeReleaseTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void RemoveSpectralAnalysisDelegate(UObject* WorldContextObject, const FOnSubmixSpectralAnalysisBP& OnSubmixSpectralAnalysisBP);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetSubmixOutputVolume(UObject* WorldContextObject, float InOutputVolume);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void StartEnvelopeFollowing(UObject* WorldContextObject);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void StartRecordingOutput(UObject* WorldContextObject, float ExpectedDuration);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void StartSpectralAnalysis(UObject* WorldContextObject, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void StopEnvelopeFollowing(UObject* WorldContextObject);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void StopRecordingOutput(UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, USoundWave* ExistingSoundWaveToOverwrite);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void StopSpectralAnalysis(UObject* WorldContextObject);  // parameters 0x8
};
