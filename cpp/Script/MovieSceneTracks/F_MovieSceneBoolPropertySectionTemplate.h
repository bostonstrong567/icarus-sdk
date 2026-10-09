// /Script/MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// size 0xC8, declared in Engine/Source/Runtime/MovieSceneTracks/Private/Evaluation/MovieScenePropertyTemplates.h

USTRUCT()
struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() FMovieSceneBoolChannel BoolCurve;  // 0x0038, size 0x90
};
