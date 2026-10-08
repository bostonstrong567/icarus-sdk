// /Script/MovieSceneTracks.MovieSceneAudioSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x338, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneAudioSection.h

UCLASS()
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
    UPROPERTY(EditAnywhere) USoundBase* Sound;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere) FFrameNumber StartFrameOffset;  // 0x00F0, size 0x4
    UPROPERTY(Deprecated) float StartOffset;  // 0x00F4, size 0x4
    UPROPERTY(Deprecated) float AudioStartTime;  // 0x00F8, size 0x4
    UPROPERTY(Deprecated) float AudioDilationFactor;  // 0x00FC, size 0x4
    UPROPERTY(Deprecated) float AudioVolume;  // 0x0100, size 0x4
    UPROPERTY() FMovieSceneFloatChannel SoundVolume;  // 0x0108, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel PitchMultiplier;  // 0x01A8, size 0xA0
    UPROPERTY() FMovieSceneActorReferenceData AttachActorData;  // 0x0248, size 0xB0
    UPROPERTY(EditAnywhere) bool bLooping;  // 0x02F8, size 0x1
    UPROPERTY(EditAnywhere) bool bSuppressSubtitles;  // 0x02F9, size 0x1
    UPROPERTY(EditAnywhere) bool bOverrideAttenuation;  // 0x02FA, size 0x1
    UPROPERTY(EditAnywhere) USoundAttenuation* AttenuationSettings;  // 0x0300, size 0x8
    UPROPERTY() FOnQueueSubtitles OnQueueSubtitles;  // 0x0308, size 0x10
    UPROPERTY() FOnAudioFinished OnAudioFinished;  // 0x0318, size 0x10
    UPROPERTY() FOnAudioPlaybackPercent OnAudioPlaybackPercent;  // 0x0328, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure) USoundBase* GetSound() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FFrameNumber GetStartOffset() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSound(USoundBase* InSound);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetStartOffset(FFrameNumber InStartOffset);  // parameters 0x4
};
