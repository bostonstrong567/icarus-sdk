// /Script/MovieScene.MovieSceneEvalTemplate
// size 0x20, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h

USTRUCT()
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() EMovieSceneCompletionMode CompletionMode;  // 0x0010, size 0x1
    UPROPERTY(Instanced) TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr;  // 0x0014, size 0x8
};
