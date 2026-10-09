// /Script/MovieSceneTracks.MovieSceneParameterSectionTemplate
// size 0x80, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Evaluation/MovieSceneParameterTemplate.h

USTRUCT()
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() TArray<FScalarParameterNameAndCurve> Scalars;  // 0x0020, size 0x10
    UPROPERTY() TArray<FBoolParameterNameAndCurve> Bools;  // 0x0030, size 0x10
    UPROPERTY() TArray<FVector2DParameterNameAndCurves> Vector2Ds;  // 0x0040, size 0x10
    UPROPERTY() TArray<FVectorParameterNameAndCurves> Vectors;  // 0x0050, size 0x10
    UPROPERTY() TArray<FColorParameterNameAndCurves> Colors;  // 0x0060, size 0x10
    UPROPERTY() TArray<FTransformParameterNameAndCurves> Transforms;  // 0x0070, size 0x10
};
