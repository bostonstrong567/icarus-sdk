// /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate
// size 0x48, declared in Engine/Source/Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneCameraShakeSourceShakeTemplate.h

USTRUCT()
struct FMovieSceneCameraShakeSourceShakeSectionTemplate : public FMovieSceneEvalTemplate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FMovieSceneCameraShakeSectionData SourceData;  // 0x0020, size 0x20
    UPROPERTY() FFrameNumber SectionStartTime;  // 0x0040, size 0x4
    UPROPERTY() FFrameNumber SectionEndTime;  // 0x0044, size 0x4
};
