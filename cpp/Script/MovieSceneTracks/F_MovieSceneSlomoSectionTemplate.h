// /Script/MovieSceneTracks.MovieSceneSlomoSectionTemplate
// size 0xC0, declared in Engine/Source/Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneSlomoTemplate.h

USTRUCT()
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FMovieSceneFloatChannel SlomoCurve;  // 0x0020, size 0xA0
};
