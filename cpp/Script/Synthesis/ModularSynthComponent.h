// /Script/Synthesis.ModularSynthComponent
// Derives from: USynthComponent > USceneComponent > UActorComponent > UObject
// size 0xD80, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SynthComponents/EpicSynth1Component.h

UCLASS(Config=Engine)
class UModularSynthComponent : public USynthComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 VoiceCount;  // 0x06C0, size 0x4
protected:
    Audio::FEpicSynth1 EpicSynth1;  // 0x06C8, not reflected
public:
    UFUNCTION(BlueprintCallable) FPatchId CreatePatch(ESynth1PatchSource PatchSource, const TArray<FSynth1PatchCable>& PatchCables, bool bEnableByDefault);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);  // parameters 0x6
    UFUNCTION(BlueprintCallable) void NoteOn(float Note, int32 Velocity, float Duration);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetAttackTime(float AttackTimeMsec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetChorusDepth(float Depth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetChorusEnabled(bool EnableChorus);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetChorusFeedback(float Feedback);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetChorusFrequency(float Frequency);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDecayTime(float DecayTimeMsec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetEnableLegato(bool LegatoEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool SetEnablePatch(FPatchId PatchId, bool bIsEnabled);  // parameters 0x6
    UFUNCTION(BlueprintCallable) void SetEnablePolyphony(bool bEnablePolyphony);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetEnableRetrigger(bool RetriggerEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetEnableUnison(bool EnableUnison);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFilterFrequency(float FilterFrequencyHz);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFilterFrequencyMod(float FilterFrequencyHz);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFilterQ(float FilterQ);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFilterQMod(float FilterQ);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFilterType(ESynthFilterType FilterType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetGainDb(float GainDb);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetLFOFrequency(int32 LFOIndex, float FrequencyHz);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetLFOFrequencyMod(int32 LFOIndex, float FrequencyModHz);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetLFOGain(int32 LFOIndex, float Gain);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetLFOGainMod(int32 LFOIndex, float GainMod);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetLFOMode(int32 LFOIndex, ESynthLFOMode LFOMode);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetLFOPatch(int32 LFOIndex, ESynthLFOPatchType LFOPatchType);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetLFOType(int32 LFOIndex, ESynthLFOType LFOType);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetModEnvAttackTime(float AttackTimeMsec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetModEnvBiasInvert(bool bInvert);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetModEnvDecayTime(float DecayTimeMsec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetModEnvDepth(float Depth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetModEnvInvert(bool bInvert);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetModEnvPatch(ESynthModEnvPatch InPatchType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetModEnvReleaseTime(float Release);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetModEnvSustainGain(float SustainGain);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetOscCents(int32 OscIndex, float Cents);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetOscFrequencyMod(int32 OscIndex, float OscFreqMod);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetOscGain(int32 OscIndex, float OscGain);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetOscGainMod(int32 OscIndex, float OscGainMod);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetOscOctave(int32 OscIndex, float Octave);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetOscPulsewidth(int32 OscIndex, float Pulsewidth);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetOscSemitones(int32 OscIndex, float Semitones);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetOscSync(bool bIsSynced);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetOscType(int32 OscIndex, ESynth1OscType OscType);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetPan(float Pan);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPitchBend(float PitchBend);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPortamento(float Portamento);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetReleaseTime(float ReleaseTimeMsec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSpread(float Spread);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetStereoDelayFeedback(float DelayFeedback);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetStereoDelayIsEnabled(bool StereoDelayEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetStereoDelayRatio(float DelayRatio);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetStereoDelayTime(float DelayTimeMsec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetStereoDelayWetlevel(float DelayWetlevel);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSustainGain(float SustainGain);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSynthPreset(const FModularSynthPreset& SynthPreset);  // parameters 0xE0
};
