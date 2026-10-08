// /Script/MovieScene.MovieSceneEvaluationHookSystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x90, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/MovieSceneEvaluationHookSystem.h

UCLASS()
class UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem
{
public:
    UPROPERTY() TMap<FMovieSceneEvaluationInstanceKey, FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance;  // 0x0040, size 0x50
};
