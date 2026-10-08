// /Script/AudioMixer.SynthComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x6C0, declared in Engine/Source/Runtime/AudioMixer/Public/Components/SynthComponent.h

UCLASS(Abstract, Config=Engine)
class USynthComponent : public USceneComponent
{
public:
    UPROPERTY() uint8 bAutoDestroy : 1;  // 0x01F8, mask 0x01
    UPROPERTY() uint8 bStopWhenOwnerDestroyed : 1;  // 0x01F8, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAllowSpatialization : 1;  // 0x01F8, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverrideAttenuation : 1;  // 0x01F8, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableBusSends : 1;  // 0x01FC, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bEnableBaseSubmix : 1;  // 0x01FC, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bEnableSubmixSends : 1;  // 0x01FC, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundAttenuation* AttenuationSettings;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundAttenuationSettings AttenuationOverrides;  // 0x0208, size 0x3A0
    UPROPERTY(Deprecated) USoundConcurrency* ConcurrencySettings;  // 0x05A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<USoundConcurrency*> ConcurrencySet;  // 0x05B0, size 0x50
    UPROPERTY(EditAnywhere) USoundClass* SoundClass;  // 0x0600, size 0x8
    UPROPERTY(EditAnywhere) USoundEffectSourcePresetChain* SourceEffectChain;  // 0x0608, size 0x8
    UPROPERTY(EditAnywhere) USoundSubmixBase* SoundSubmix;  // 0x0610, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSoundSubmixSendInfo> SoundSubmixSends;  // 0x0618, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSoundSourceBusSendInfo> BusSends;  // 0x0628, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSoundSourceBusSendInfo> PreEffectBusSends;  // 0x0638, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bIsUISound : 1;  // 0x0648, mask 0x01
    UPROPERTY() uint8 bIsPreviewSound : 1;  // 0x0648, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EnvelopeFollowerAttackTime;  // 0x064C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EnvelopeFollowerReleaseTime;  // 0x0650, size 0x4
    UPROPERTY(BlueprintAssignable) FOnSynthEnvelopeValue OnAudioEnvelopeValue;  // 0x0658, size 0x10
    UPROPERTY(Transient) USynthSound* Synth;  // 0x0688, size 0x8
    UPROPERTY(Transient, Instanced) UAudioComponent* AudioComponent;  // 0x0690, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    uint8 : 1 bAlwaysPlay;  // 0x0648
    TMulticastDelegate<void __cdecl(UAudioComponent const *,float),FDefaultDelegateUserPolicy> OnAudioEnvelopeValueNative;  // 0x0668
    int32 NumChannels;  // 0x0680, protected
    int32 PreferredBufferLength;  // 0x0684, protected
    bool bIsSynthPlaying;  // 0x0698, private
    bool bIsInitialized;  // 0x0699, private
    TQueue<TFunction<void __cdecl(void)>,1> CommandQueue;  // 0x06A0, private
    TSharedPtr<ISoundGenerator,1> SoundGenerator;  // 0x06B0, private

    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlaying() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLowPassFilterFrequency(float InLowPassFilterFrequency);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetOutputToBusOnly(bool bInOutputToBusOnly);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSubmixSend(USoundSubmixBase* Submix, float SendLevel);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetVolumeMultiplier(float VolumeMultiplier);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Start();
    UFUNCTION(BlueprintCallable) void Stop();

    // Virtual functions that start here:
    //   CreateSoundGenerator, GetSoundClass, Init, OnBeginGenerate, OnEndGenerate, OnGenerateAudio, OnStart
    //   OnStop, SetLowPassFilterFrequency
};
