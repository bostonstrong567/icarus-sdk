// /Script/MovieScene.MovieScenePropertySectionTemplate
// size 0x38, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieScenePropertyTemplate.h

USTRUCT()
struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() FMovieScenePropertySectionData PropertyData;  // 0x0020, size 0x18
};
