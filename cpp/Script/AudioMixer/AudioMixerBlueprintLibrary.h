// /Script/AudioMixer.AudioMixerBlueprintLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/AudioMixer/Public/AudioMixerBlueprintLibrary.h

UCLASS()
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddMasterSubmixEffect(UObject* WorldContextObject, USoundEffectSubmixPreset* SubmixEffectPreset);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void AddSourceEffectToPresetChain(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, FSourceEffectChainEntry Entry);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static int32 AddSubmixEffect(UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static void ClearMasterSubmixEffects(UObject* WorldContextObject);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void ClearSubmixEffectChainOverride(UObject* WorldContextObject, USoundSubmix* SoundSubmix, float FadeTimeSec);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void ClearSubmixEffects(UObject* WorldContextObject, USoundSubmix* SoundSubmix);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void GetMagnitudeForFrequencies(UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>& Magnitudes, USoundSubmix* SubmixToAnalyze);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static int32 GetNumberOfEntriesInSourceEffectChain(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void GetPhaseForFrequencies(UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>& Phases, USoundSubmix* SubmixToAnalyze);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static bool IsAudioBusActive(UObject* WorldContextObject, UAudioBus* AudioBus);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32 InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32 InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32 InStartingOctave, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32 InNumBands, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void PauseRecordingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToPause);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void PrimeSoundCueForPlayback(USoundCue* SoundCue);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void PrimeSoundForPlayback(USoundWave* SoundWave, FOnSoundLoadComplete OnLoadCompletion);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void RemoveMasterSubmixEffect(UObject* WorldContextObject, USoundEffectSubmixPreset* SubmixEffectPreset);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void RemoveSourceEffectFromPresetChain(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void RemoveSubmixEffect(UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void RemoveSubmixEffectAtIndex(UObject* WorldContextObject, USoundSubmix* SoundSubmix, int32 SubmixChainIndex);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void RemoveSubmixEffectPreset(UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void RemoveSubmixEffectPresetAtIndex(UObject* WorldContextObject, USoundSubmix* SoundSubmix, int32 SubmixChainIndex);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void ReplaceSoundEffectSubmix(UObject* WorldContextObject, USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, USoundEffectSubmixPreset* SubmixEffectPreset);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void ReplaceSubmixEffect(UObject* WorldContextObject, USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, USoundEffectSubmixPreset* SubmixEffectPreset);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void ResumeRecordingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToPause);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void SetBypassSourceEffectChainEntry(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed);  // parameters 0x15
    UFUNCTION(BlueprintCallable) static void SetSubmixEffectChainOverride(UObject* WorldContextObject, USoundSubmix* SoundSubmix, TArray<USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static void StartAnalyzingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void StartAudioBus(UObject* WorldContextObject, UAudioBus* AudioBus);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void StartRecordingOutput(UObject* WorldContextObject, float ExpectedDuration, USoundSubmix* SubmixToRecord);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void StopAnalyzingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToStopAnalyzing);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void StopAudioBus(UObject* WorldContextObject, UAudioBus* AudioBus);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static USoundWave* StopRecordingOutput(UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, USoundSubmix* SubmixToRecord, USoundWave* ExistingSoundWaveToOverwrite);  // parameters 0x48
    UFUNCTION(BlueprintCallable) static float TrimAudioCache(float InMegabytesToFree);  // parameters 0x8
};
