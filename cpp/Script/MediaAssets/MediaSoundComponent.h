// /Script/MediaAssets.MediaSoundComponent
// Derives from: USynthComponent > USceneComponent > UActorComponent > UObject
// size 0x820, declared in Engine/Source/Runtime/MediaAssets/Public/MediaSoundComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UMediaSoundComponent : public USynthComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) EMediaSoundChannels Channels;  // 0x06C0, size 0x4
    UPROPERTY(EditAnywhere) bool DynamicRateAdjustment;  // 0x06C4, size 0x1
    UPROPERTY(EditAnywhere) float RateAdjustmentFactor;  // 0x06C8, size 0x4
    UPROPERTY(EditAnywhere) FFloatRange RateAdjustmentRange;  // 0x06CC, size 0x10
protected:
    UPROPERTY(EditAnywhere) UMediaPlayer* MediaPlayer;  // 0x06E0, size 0x8
private:
    TAtomic<float> CachedRate;  // 0x06E8, not reflected
    TAtomic<FTimespan> CachedTime;  // 0x06F0, not reflected
    FWindowsCriticalSection CriticalSection;  // 0x06F8, not reflected
    TWeakObjectPtr<UMediaPlayer,FWeakObjectPtr> CurrentPlayer;  // 0x0720, not reflected
    TWeakPtr<FMediaPlayerFacade,1> CurrentPlayerFacade;  // 0x0728, not reflected
    float RateAdjustment;  // 0x0738, not reflected
    FMediaAudioResampler * Resampler;  // 0x0740, not reflected
    TSharedPtr<FMediaAudioSampleQueue,1> SampleQueue;  // 0x0748, not reflected
    TAtomic<FTimespan> LastPlaySampleTime;  // 0x0758, not reflected
    TArray<float,TSizedDefaultAllocator<32> > FrequenciesToAnalyze;  // 0x0760, not reflected
    EMediaSoundComponentFFTSize FFTSize;  // 0x0770, not reflected
    Audio::FAsyncSpectrumAnalyzer SpectrumAnalyzer;  // 0x0778, not reflected
    Audio::FSpectrumAnalyzerSettings SpectrumAnalyzerSettings;  // 0x0798, not reflected
    Audio::FEnvelopeFollower EnvelopeFollower;  // 0x07A0, not reflected
    int32 EnvelopeFollowerAttackTime;  // 0x07C8, not reflected
    int32 EnvelopeFollowerReleaseTime;  // 0x07CC, not reflected
    float CurrentEnvelopeValue;  // 0x07D0, not reflected
    FWindowsCriticalSection EnvelopeFollowerCriticalSection;  // 0x07D8, not reflected
    TArray<float,TAlignedHeapAllocator<16> > AudioScratchBuffer;  // 0x0800, not reflected
    bool bSpectralAnalysisEnabled;  // 0x0810, not reflected
    bool bEnvelopeFollowingEnabled;  // 0x0811, not reflected
    bool bEnvelopeFollowerSettingsChanged;  // 0x0812, not reflected
public:
    UFUNCTION(BlueprintCallable) bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);  // parameters 0x3A1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetEnvelopeValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UMediaPlayer* GetMediaPlayer() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) TArray<FMediaSoundComponentSpectralData> GetNormalizedSpectralData();  // parameters 0x10
    UFUNCTION(BlueprintCallable) TArray<FMediaSoundComponentSpectralData> GetSpectralData();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetEnvelopeFollowingsettings(int32 AttackTimeMsec, int32 ReleaseTimeMsec);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);  // parameters 0x11
};
