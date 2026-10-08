// /Script/MovieSceneTracks.MovieSceneSlomoSectionTemplate
// size 0xC0, declared in Engine/Source/Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneSlomoTemplate.h

USTRUCT()
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
    UPROPERTY() FMovieSceneFloatChannel SlomoCurve;  // 0x0020, size 0xA0
};
