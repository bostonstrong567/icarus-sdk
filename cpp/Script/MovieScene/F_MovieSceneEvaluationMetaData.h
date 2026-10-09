// /Script/MovieScene.MovieSceneEvaluationMetaData
// size 0x20, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h

USTRUCT()
struct FMovieSceneEvaluationMetaData
{
public:
    UPROPERTY() TArray<FMovieSceneSequenceID> ActiveSequences;  // 0x0000, size 0x10
    UPROPERTY() TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities;  // 0x0010, size 0x10
};
