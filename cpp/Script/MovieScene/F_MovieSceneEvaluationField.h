// /Script/MovieScene.MovieSceneEvaluationField
// size 0x30, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h

USTRUCT()
struct FMovieSceneEvaluationField
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<FMovieSceneFrameRange> Ranges;  // 0x0000, size 0x10
    UPROPERTY() TArray<FMovieSceneEvaluationGroup> Groups;  // 0x0010, size 0x10
    UPROPERTY() TArray<FMovieSceneEvaluationMetaData> MetaData;  // 0x0020, size 0x10
};
