// /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate
// size 0x40, declared in Engine/Source/Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneCameraShakeSourceTriggerTemplate.h

USTRUCT()
struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : public FMovieSceneEvalTemplate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<FFrameNumber> TriggerTimes;  // 0x0020, size 0x10
    UPROPERTY() TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues;  // 0x0030, size 0x10
};
