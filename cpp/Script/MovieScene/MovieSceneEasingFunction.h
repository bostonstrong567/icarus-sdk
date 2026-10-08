// /Script/MovieScene.MovieSceneEasingFunction
// Derives from: UInterface > UObject
// size 0x28, declared in Engine/Source/Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h

UCLASS(Abstract)
class UMovieSceneEasingFunction : public UInterface
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float OnEvaluate(float Interp) const;  // parameters 0x8
};
