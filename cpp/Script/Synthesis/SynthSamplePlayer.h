// /Script/Synthesis.SynthSamplePlayer
// Derives from: USynthComponent > USceneComponent > UActorComponent > UObject
// size 0x7F0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SynthComponents/SynthComponentWaveTable.h

UCLASS(Config=Engine)
class USynthSamplePlayer : public USynthComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundWave* SoundWave;  // 0x06C0, size 0x8
    UPROPERTY(BlueprintAssignable) FOnSampleLoaded OnSampleLoaded;  // 0x06C8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSamplePlaybackProgress OnSamplePlaybackProgress;  // 0x06D8, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    Audio::FSampleBufferReader SampleBufferReader;  // 0x06E8, protected
    Audio::TSampleBuffer<short> SampleBuffer;  // 0x0788, protected
    Audio::FSoundWavePCMLoader SoundWaveLoader;  // 0x07B0, protected
    float SampleDurationSec;  // 0x07D8, protected
    float SamplePlaybackProgressSec;  // 0x07DC, protected
    bool bIsLoaded;  // 0x07E0, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurrentPlaybackProgressPercent() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurrentPlaybackProgressTime() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetSampleDuration() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLoaded() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);  // parameters 0x6
    UFUNCTION(BlueprintCallable) void SetPitch(float InPitch, float TimeSec);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetScrubMode(bool bScrubMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetScrubTimeWidth(float InScrubTimeWidthSec);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSoundWave(USoundWave* InSoundWave);  // parameters 0x8
};
