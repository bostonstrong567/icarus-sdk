// /Script/MovieSceneTracks.MovieSceneParameterSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x148, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneParameterSection.h

UCLASS()
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
    UPROPERTY() TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves;  // 0x00E8, size 0x10
    UPROPERTY() TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;  // 0x00F8, size 0x10
    UPROPERTY() TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves;  // 0x0108, size 0x10
    UPROPERTY() TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;  // 0x0118, size 0x10
    UPROPERTY() TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves;  // 0x0128, size 0x10
    UPROPERTY() TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves;  // 0x0138, size 0x10

    UFUNCTION(BlueprintCallable) void AddBoolParameterKey(FName InParameterName, FFrameNumber InTime, bool InValue);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void AddColorParameterKey(FName InParameterName, FFrameNumber InTime, FLinearColor InValue);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void AddScalarParameterKey(FName InParameterName, FFrameNumber InTime, float InValue);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void AddTransformParameterKey(FName InParameterName, FFrameNumber InTime, const FTransform& InValue);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void AddVector2DParameterKey(FName InParameterName, FFrameNumber InTime, FVector2D InValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void AddVectorParameterKey(FName InParameterName, FFrameNumber InTime, FVector InValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetParameterNames(TSet<FName>& ParameterNames) const;  // parameters 0x50
    UFUNCTION(BlueprintCallable) bool RemoveBoolParameter(FName InParameterName);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool RemoveColorParameter(FName InParameterName);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool RemoveScalarParameter(FName InParameterName);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool RemoveTransformParameter(FName InParameterName);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool RemoveVector2DParameter(FName InParameterName);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool RemoveVectorParameter(FName InParameterName);  // parameters 0x9

    // Virtual functions that start here:
    //   ReconstructChannelProxy
};
