// /Script/MovieSceneTracks.MovieSceneTransformOrigin
// Derives from: UInterface > UObject
// size 0x28, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/IMovieSceneTransformOrigin.h

UCLASS(Abstract)
class UMovieSceneTransformOrigin : public UInterface
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FTransform BP_GetTransformOrigin() const;  // parameters 0x30
};
