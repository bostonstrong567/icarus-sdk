// /Script/Synthesis.SynthComponentMonoWaveTable
// Derives from: USynthComponent > USceneComponent > UActorComponent > UObject
// size 0xE00, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SynthComponents/SynthComponentMonoWaveTable.h

UCLASS(Config=Engine)
class USynthComponentMonoWaveTable : public USynthComponent
{
public:
    UPROPERTY(BlueprintAssignable) FOnTableAltered OnTableAltered;  // 0x06C0, size 0x10
    UPROPERTY(BlueprintAssignable) FNumTablesChanged OnNumTablesChanged;  // 0x06D0, size 0x10
    UPROPERTY(EditAnywhere) UMonoWaveTableSynthPreset* CurrentPreset;  // 0x06E0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    UMonoWaveTableSynthPreset * CachedPreset;  // 0x06E8, protected
    Audio::FMonoWaveTable Synth;  // 0x06F0, protected
    int32 SampleRate;  // 0x0DF8, protected

    UFUNCTION(BlueprintCallable) float GetCurveTangent(int32 TableIndex);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<float> GetKeyFrameValuesForTable(float TableIndex) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMaxTableIndex() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) int32 GetNumTableEntries();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void NoteOff(float InMidiNote);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void NoteOn(float InMidiNote, float InVelocity);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RefreshAllWaveTables();
    UFUNCTION(BlueprintCallable) void RefreshWaveTable(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAmpEnvelopeBiasDepth(float InDepth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAmpEnvelopeDepth(float InDepth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAmpEnvelopeInvert(bool bInInvert);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAmpEnvelopeSustainGain(float InSustainGain);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32 TableIndex);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool SetCurveTangent(int32 TableIndex, float InNewTangent);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool SetCurveValue(int32 TableIndex, int32 KeyframeIndex, float NewValue);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFilterEnvelopeBiasDepth(float InDepth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFilterEnvelopeDepth(float InDepth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFilterEnvelopeInvert(bool bInInvert);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFilterEnvelopeSustainGain(float InSustainGain);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFrequency(float FrequencyHz);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFrequencyPitchBend(float FrequencyOffsetCents);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFrequencyWithMidiNote(float InMidiNote);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetLowPassFilterResonance(float InNewQ);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPosLfoDepth(float InLfoDepth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPosLfoFrequency(float InLfoFrequency);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPosLfoType(ESynthLFOType InLfoType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPositionEnvelopeBiasDepth(float InDepth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPositionEnvelopeDepth(float InDepth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPositionEnvelopeInvert(bool bInInvert);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPositionEnvelopeSustainGain(float InSustainGain);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSustainPedalState(bool InSustainPedalState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetWaveTablePosition(float InPosition);  // parameters 0x4
};
