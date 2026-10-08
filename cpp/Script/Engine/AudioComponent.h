// /Script/Engine.AudioComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x860, declared in Engine/Source/Runtime/Engine/Classes/Components/AudioComponent.h

UCLASS(Config=Engine)
class UAudioComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundBase* Sound;  // 0x01F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAudioComponentParam> InstanceParameters;  // 0x0200, size 0x10
    UPROPERTY(EditAnywhere) USoundClass* SoundClassOverride;  // 0x0210, size 0x8
    UPROPERTY() uint8 bAutoDestroy : 1;  // 0x0218, mask 0x01
    UPROPERTY() uint8 bStopWhenOwnerDestroyed : 1;  // 0x0218, mask 0x02
    UPROPERTY() uint8 bShouldRemainActiveIfDropped : 1;  // 0x0218, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAllowSpatialization : 1;  // 0x0218, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverrideAttenuation : 1;  // 0x0218, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverrideSubtitlePriority : 1;  // 0x0218, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bIsUISound : 1;  // 0x0218, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableLowPassFilter : 1;  // 0x0218, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverridePriority : 1;  // 0x0219, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSuppressSubtitles : 1;  // 0x0219, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAutoManageAttachment : 1;  // 0x021A, mask 0x10
    UPROPERTY() FName AudioComponentUserID;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PitchModulationMin;  // 0x0228, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PitchModulationMax;  // 0x022C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VolumeModulationMin;  // 0x0230, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VolumeModulationMax;  // 0x0234, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VolumeMultiplier;  // 0x0238, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EnvelopeFollowerAttackTime;  // 0x023C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EnvelopeFollowerReleaseTime;  // 0x0240, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Priority;  // 0x0244, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SubtitlePriority;  // 0x0248, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundEffectSourcePresetChain* SourceEffectChain;  // 0x0250, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PitchMultiplier;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LowPassFilterFrequency;  // 0x025C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundAttenuation* AttenuationSettings;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundAttenuationSettings AttenuationOverrides;  // 0x0270, size 0x3A0
    UPROPERTY(Deprecated) USoundConcurrency* ConcurrencySettings;  // 0x0610, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<USoundConcurrency*> ConcurrencySet;  // 0x0618, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAttachmentRule AutoAttachLocationRule;  // 0x0674, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAttachmentRule AutoAttachRotationRule;  // 0x0675, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAttachmentRule AutoAttachScaleRule;  // 0x0676, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundModulationDefaultRoutingSettings ModulationRouting;  // 0x0678, size 0x48
    UPROPERTY(BlueprintAssignable) FOnAudioPlayStateChanged OnAudioPlayStateChanged;  // 0x06C0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnAudioVirtualizationChanged OnAudioVirtualizationChanged;  // 0x06E8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnAudioFinished OnAudioFinished;  // 0x0710, size 0x10
    UPROPERTY(BlueprintAssignable) FOnAudioPlaybackPercent OnAudioPlaybackPercent;  // 0x0738, size 0x10
    UPROPERTY(BlueprintAssignable) FOnAudioSingleEnvelopeValue OnAudioSingleEnvelopeValue;  // 0x0760, size 0x10
    UPROPERTY(BlueprintAssignable) FOnAudioMultiEnvelopeValue OnAudioMultiEnvelopeValue;  // 0x0788, size 0x10
    UPROPERTY() FOnQueueSubtitles OnQueueSubtitles;  // 0x07B0, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) TWeakObjectPtr<USceneComponent> AutoAttachParent;  // 0x07C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AutoAttachSocketName;  // 0x07C8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    uint8 : 1 bPreviewComponent;  // 0x0219
    uint8 : 1 bIgnoreForFlushing;  // 0x0219
    uint8 : 1 bAlwaysPlay;  // 0x0219
    uint8 : 1 bIsMusic;  // 0x0219
    uint8 : 1 bReverb;  // 0x0219
    uint8 : 1 bCenterChannelOnly;  // 0x0219
    uint8 : 1 bIsPreviewSound;  // 0x021A
    uint8 : 1 bIsPaused;  // 0x021A
    uint8 : 1 bIsVirtualized;  // 0x021A
    uint8 : 1 bIsFadingOut;  // 0x021A
    uint8 : 1 bDidAutoAttach;  // 0x021A, private
    uint32 AudioDeviceID;  // 0x021C
    int32 ActiveCount;  // 0x0260
    float OcclusionCheckInterval;  // 0x0668
    float TimeAudioComponentPlayed;  // 0x066C
    float FadeInTimeDuration;  // 0x0670
    TMulticastDelegate<void __cdecl(UAudioComponent const *,enum EAudioComponentPlayState),FDefaultDelegateUserPolicy> OnAudioPlayStateChangedNative;  // 0x06D0
    TMulticastDelegate<void __cdecl(UAudioComponent const *,bool),FDefaultDelegateUserPolicy> OnAudioVirtualizationChangedNative;  // 0x06F8
    TMulticastDelegate<void __cdecl(UAudioComponent *),FDefaultDelegateUserPolicy> OnAudioFinishedNative;  // 0x0720
    TMulticastDelegate<void __cdecl(UAudioComponent const *,USoundWave const *,float),FDefaultDelegateUserPolicy> OnAudioPlaybackPercentNative;  // 0x0748
    TMulticastDelegate<void __cdecl(UAudioComponent const *,USoundWave const *,float),FDefaultDelegateUserPolicy> OnAudioSingleEnvelopeValueNative;  // 0x0770
    TMulticastDelegate<void __cdecl(UAudioComponent const *,float,float,int),FDefaultDelegateUserPolicy> OnAudioMultiEnvelopeValueNative;  // 0x0798
    uint64 AudioComponentID;  // 0x07D0, private
    float RetriggerTimeSinceLastUpdate;  // 0x07D8, private
    float RetriggerUpdateInterval;  // 0x07DC, private
    FVector SavedAutoAttachRelativeLocation;  // 0x07E0, private
    FRotator SavedAutoAttachRelativeRotation;  // 0x07EC, private
    FVector SavedAutoAttachRelativeScale3D;  // 0x07F8, private
    TMap<unsigned int,UAudioComponent::FSoundWavePlaybackTimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned int,UAudioComponent::FSoundWavePlaybackTimeData,0> > SoundWavePlaybackTimes;  // 0x0808, private
    FRandomStream RandomStream;  // 0x0858, protected

    UFUNCTION(BlueprintCallable) void AdjustAttenuation(const FSoundAttenuationSettings& InAttenuationSettings);  // parameters 0x3A0
    UFUNCTION(BlueprintCallable) void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, EAudioFaderCurve FadeCurve);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);  // parameters 0x3A1
    UFUNCTION(BlueprintCallable) void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, EAudioFaderCurve FadeCurve);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void FadeOut(float FadeOutDuration, float FadeVolumeLevel, EAudioFaderCurve FadeCurve);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool GetCookedEnvelopeData(float& OutEnvelopeData);  // parameters 0x5
    UFUNCTION(BlueprintCallable) bool GetCookedEnvelopeDataForAllPlayingSounds(TArray<FSoundWaveEnvelopeDataPerSound>& OutEnvelopeData);  // parameters 0x11
    UFUNCTION(BlueprintCallable) bool GetCookedFFTData(const TArray<float>& FrequenciesToGet, TArray<FSoundWaveSpectralData>& OutSoundWaveSpectralData);  // parameters 0x21
    UFUNCTION(BlueprintCallable) bool GetCookedFFTDataForAllPlayingSounds(TArray<FSoundWaveSpectralDataPerSound>& OutSoundWaveSpectralData);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) EAudioComponentPlayState GetPlayState() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasCookedAmplitudeEnvelopeData() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasCookedFFTData() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlaying() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsVirtualized() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Play(float StartTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayQuantized(UObject* WorldContextObject, UQuartzClockHandle*& InClockHandle, FQuartzQuantizationBoundary& InQuantizationBoundary, const FOnQuartzCommandEventBP& InDelegate, float InStartTime, float InFadeInDuration, float InFadeVolumeLevel, EAudioFaderCurve InFadeCurve);  // parameters 0x39
    UFUNCTION(BlueprintCallable) void SetAudioBusSendPostEffect(UAudioBus* AudioBus, float AudioBusSendLevel);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetAudioBusSendPreEffect(UAudioBus* AudioBus, float AudioBusSendLevel);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetBoolParameter(FName InName, bool InBool);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetFloatParameter(FName InName, float InFloat);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetIntParameter(FName InName, int32 InInt);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLowPassFilterFrequency(float InLowPassFilterFrequency);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetOutputToBusOnly(bool bInOutputToBusOnly);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPaused(bool bPause);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPitchMultiplier(float NewPitchMultiplier);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSound(USoundBase* NewSound);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetSourceBusSendPostEffect(USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetSourceBusSendPreEffect(USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetSubmixSend(USoundSubmixBase* Submix, float SendLevel);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetUISound(bool bInUISound);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetVolumeMultiplier(float NewVolumeMultiplier);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetWaveParameter(FName InName, USoundWave* InWave);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Stop();
    UFUNCTION(BlueprintCallable) void StopDelayed(float DelayTime);  // parameters 0x4

    // Virtual functions that start here:
    //   FadeIn, FadeOut, IsPlaying, Play, PlayQuantized, Stop
};
