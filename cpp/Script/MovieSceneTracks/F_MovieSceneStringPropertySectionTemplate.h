// /Script/MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// size 0xD8, declared in Engine/Source/Runtime/MovieSceneTracks/Private/Evaluation/MovieScenePropertyTemplates.h

USTRUCT()
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() FMovieSceneStringChannel StringCurve;  // 0x0038, size 0xA0
};
