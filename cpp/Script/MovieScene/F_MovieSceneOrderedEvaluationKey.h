// /Script/MovieScene.MovieSceneOrderedEvaluationKey
// size 0x10, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h

USTRUCT()
struct FMovieSceneOrderedEvaluationKey
{
public:
    UPROPERTY() FMovieSceneEvaluationKey Key;  // 0x0000, size 0xC
    UPROPERTY() uint16 SetupIndex;  // 0x000C, size 0x2
    UPROPERTY() uint16 TearDownIndex;  // 0x000E, size 0x2
};
