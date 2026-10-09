// /Script/Synthesis.GranularSynth
// Derives from: USynthComponent > USceneComponent > UActorComponent > UObject
// size 0xA80, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SynthComponents/SynthComponentGranulator.h

UCLASS(Config=Engine)
class UGranularSynth : public USynthComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Transient) USoundWave* GranulatedSoundWave;  // 0x06C0, size 0x8
    Audio::FGranularSynth GranularSynth;  // 0x06C8, not reflected
    Audio::FSoundWavePCMLoader SoundWaveLoader;  // 0x0A48, not reflected
    bool bIsLoaded;  // 0x0A70, not reflected
    bool bRegistered;  // 0x0A71, not reflected
    bool bIsLoading;  // 0x0A72, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurrentPlayheadTime() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetSampleDuration() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLoaded() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void NoteOff(float Note, bool bKill);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void NoteOn(float Note, int32 Velocity, float Duration);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetAttackTime(float AttackTimeMsec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDecayTime(float DecayTimeMsec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetGrainDuration(float BaseDurationMsec, FVector2D DurationRange);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetGrainPan(float BasePan, FVector2D PanRange);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetGrainPitch(float BasePitch, FVector2D PitchRange);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetGrainProbability(float InGrainProbability);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetGrainVolume(float BaseVolume, FVector2D VolumeRange);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetGrainsPerSecond(float InGrainsPerSecond);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPlaybackSpeed(float InPlayheadRate);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetReleaseTimeMsec(float ReleaseTimeMsec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetScrubMode(bool bScrubMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSoundWave(USoundWave* InSoundWave);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetSustainGain(float SustainGain);  // parameters 0x4
};
