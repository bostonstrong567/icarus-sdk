// /Script/MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// size 0x48, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Evaluation/MovieSceneCameraShakeTemplate.h

USTRUCT()
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneEvalTemplate
{
    UPROPERTY() FMovieSceneCameraShakeSectionData SourceData;  // 0x0020, size 0x20
    UPROPERTY() FFrameNumber SectionStartTime;  // 0x0040, size 0x4
};
