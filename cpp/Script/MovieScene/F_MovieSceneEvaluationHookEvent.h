// /Script/MovieScene.MovieSceneEvaluationHookEvent
// size 0x38, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/MovieSceneEvaluationHookSystem.h

USTRUCT()
struct FMovieSceneEvaluationHookEvent
{
public:
    UPROPERTY() FMovieSceneEvaluationHookComponent Hook;  // 0x0000, size 0x20
    FMovieSceneSequenceID SequenceID;  // 0x0020, not reflected
    int32 TriggerIndex;  // 0x0024, not reflected
    FFrameTime RootTime;  // 0x0028, not reflected
    UE::MovieScene::EEvaluationHookEvent Type;  // 0x0030, not reflected
    bool bRestoreState;  // 0x0034, not reflected
};
