// /Script/MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// size 0x48, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Evaluation/MovieSceneCameraAnimTemplate.h

USTRUCT()
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneEvalTemplate
{
    UPROPERTY() FMovieSceneCameraAnimSectionData SourceData;  // 0x0020, size 0x20
    UPROPERTY() FFrameNumber SectionStartTime;  // 0x0040, size 0x4
};
