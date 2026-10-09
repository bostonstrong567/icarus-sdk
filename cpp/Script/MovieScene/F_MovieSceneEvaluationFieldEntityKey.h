// /Script/MovieScene.MovieSceneEvaluationFieldEntityKey
// size 0xC, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h

USTRUCT()
struct FMovieSceneEvaluationFieldEntityKey
{
public:
    UPROPERTY() TWeakObjectPtr<UObject> EntityOwner;  // 0x0000, size 0x8
    UPROPERTY() uint32 EntityID;  // 0x0008, size 0x4
};
