// /Script/MovieScene.MovieSceneEvaluationHookEvent
// size 0x38, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/MovieSceneEvaluationHookSystem.h

USTRUCT()
struct FMovieSceneEvaluationHookEvent
{
    UPROPERTY() FMovieSceneEvaluationHookComponent Hook;  // 0x0000, size 0x20

    // Not reflected:
    FMovieSceneSequenceID SequenceID;  // 0x0020
    int32 TriggerIndex;  // 0x0024
    FFrameTime RootTime;  // 0x0028
    UE::MovieScene::EEvaluationHookEvent Type;  // 0x0030
    bool bRestoreState;  // 0x0034
};
