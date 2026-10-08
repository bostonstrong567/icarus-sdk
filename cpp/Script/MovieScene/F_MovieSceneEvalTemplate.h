// /Script/MovieScene.MovieSceneEvalTemplate
// size 0x20, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h

USTRUCT()
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
    UPROPERTY() EMovieSceneCompletionMode CompletionMode;  // 0x0010, size 0x1
    UPROPERTY(Instanced) TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr;  // 0x0014, size 0x8
};
