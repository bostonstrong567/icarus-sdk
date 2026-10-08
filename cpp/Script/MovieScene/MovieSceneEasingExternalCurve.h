// /Script/MovieScene.MovieSceneEasingExternalCurve
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h

UCLASS()
class UMovieSceneEasingExternalCurve : public UObject, public IMovieSceneEasingFunction
{
public:
    UPROPERTY(EditAnywhere) UCurveFloat* Curve;  // 0x0030, size 0x8
};
