// /Script/MovieSceneTracks.MovieScene3DConstraintSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x110, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieScene3DConstraintSection.h

UCLASS(MinimalAPI)
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Deprecated) FGuid ConstraintId;  // 0x00E8, size 0x10
    UPROPERTY(EditAnywhere) FMovieSceneObjectBindingID ConstraintBindingID;  // 0x00F8, size 0x18
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FMovieSceneObjectBindingID GetConstraintBindingID() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetConstraintBindingID(const FMovieSceneObjectBindingID& InConstraintBindingID);  // parameters 0x18
};
