// /Script/MovieSceneTracks.MovieScene3DConstraintSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x110, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieScene3DConstraintSection.h

UCLASS(MinimalAPI)
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
    UPROPERTY(Deprecated) FGuid ConstraintId;  // 0x00E8, size 0x10
    UPROPERTY(EditAnywhere) FMovieSceneObjectBindingID ConstraintBindingID;  // 0x00F8, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintPure) FMovieSceneObjectBindingID GetConstraintBindingID() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetConstraintBindingID(const FMovieSceneObjectBindingID& InConstraintBindingID);  // parameters 0x18
};
