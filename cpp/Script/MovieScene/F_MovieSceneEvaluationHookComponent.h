// /Script/MovieScene.MovieSceneEvaluationHookComponent
// size 0x20, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/BuiltInComponentTypes.h

USTRUCT()
struct FMovieSceneEvaluationHookComponent
{
    UPROPERTY() TScriptInterface<IMovieSceneEvaluationHook> Interface;  // 0x0000, size 0x10

    // Not reflected:
    FGuid ObjectBindingID;  // 0x0010
};
