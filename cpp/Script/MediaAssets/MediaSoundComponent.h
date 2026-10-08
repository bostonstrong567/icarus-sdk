// /Script/MediaAssets.MediaSoundComponent
// Derives from: USynthComponent > USceneComponent > UActorComponent > UObject
// size 0x820, declared in Engine/Source/Runtime/MediaAssets/Public/MediaSoundComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UMediaSoundComponent : public USynthComponent
{
public:
    UPROPERTY(EditAnywhere) EMediaSoundChannels Channels;  // 0x06C0, size 0x4
    UPROPERTY(EditAnywhere) bool DynamicRateAdjustment;  // 0x06C4, size 0x1
    UPROPERTY(EditAnywhere) float RateAdjustmentFactor;  // 0x06C8, size 0x4
    UPROPERTY(EditAnywhere) FFloatRange RateAdjustmentRange;  // 0x06CC, size 0x10
    UPROPERTY(EditAnywhere) UMediaPlayer* MediaPlayer;  // 0x06E0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TAtomic<float> CachedRate;  // 0x06E8, private
    TAtomic<FTimespan> CachedTime;  // 0x06F0, private
    FWindowsCriticalSection CriticalSection;  // 0x06F8, private
    TWeakObjectPtr<UMediaPlayer,FWeakObjectPtr> CurrentPlayer;  // 0x0720, private
    TWeakPtr<FMediaPlayerFacade,1> CurrentPlayerFacade;  // 0x0728, private
    float RateAdjustment;  // 0x0738, private
    FMediaAudioResampler * Resampler;  // 0x0740, private
    TSharedPtr<FMediaAudioSampleQueue,1> SampleQueue;  // 0x0748, private
    TAtomic<FTimespan> LastPlaySampleTime;  // 0x0758, private
    TArray<float,TSizedDefaultAllocator<32> > FrequenciesToAnalyze;  // 0x0760, private
    EMediaSoundComponentFFTSize FFTSize;  // 0x0770, private
    Audio::FAsyncSpectrumAnalyzer SpectrumAnalyzer;  // 0x0778, private
    Audio::FSpectrumAnalyzerSettings SpectrumAnalyzerSettings;  // 0x0798, private
    Audio::FEnvelopeFollower EnvelopeFollower;  // 0x07A0, private
    int32 EnvelopeFollowerAttackTime;  // 0x07C8, private
    int32 EnvelopeFollowerReleaseTime;  // 0x07CC, private
    float CurrentEnvelopeValue;  // 0x07D0, private
    FWindowsCriticalSection EnvelopeFollowerCriticalSection;  // 0x07D8, private
    TArray<float,TAlignedHeapAllocator<16> > AudioScratchBuffer;  // 0x0800, private
    bool bSpectralAnalysisEnabled;  // 0x0810, private
    bool bEnvelopeFollowingEnabled;  // 0x0811, private
    bool bEnvelopeFollowerSettingsChanged;  // 0x0812, private

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
