// /Script/MovieSceneTracks.MovieSceneObjectPropertyTemplate
// size 0xF8, declared in Engine/Source/Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneObjectPropertyTemplate.h

USTRUCT()
struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FMovieSceneObjectPathChannel ObjectChannel;  // 0x0038, size 0xC0
};
