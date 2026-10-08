// /Script/MovieScene.MovieSceneEntityComponentField
// size 0xF0, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h

USTRUCT()
struct FMovieSceneEntityComponentField
{
    UPROPERTY() FMovieSceneEvaluationFieldEntityTree PersistentEntityTree;  // 0x0000, size 0x60
    UPROPERTY() FMovieSceneEvaluationFieldEntityTree OneShotEntityTree;  // 0x0060, size 0x60
    UPROPERTY() TArray<FMovieSceneEvaluationFieldEntity> Entities;  // 0x00C0, size 0x10
    UPROPERTY() TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData;  // 0x00D0, size 0x10
    UPROPERTY() TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;  // 0x00E0, size 0x10
};
