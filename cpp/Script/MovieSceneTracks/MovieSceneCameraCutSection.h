// /Script/MovieSceneTracks.MovieSceneCameraCutSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x160, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneCameraCutSection.h

UCLASS(MinimalAPI)
class UMovieSceneCameraCutSection : public UMovieSceneSection, public IMovieSceneEntityProvider
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) bool bLockPreviousCamera;  // 0x00F0, size 0x1
private:
    UPROPERTY(Deprecated) FGuid CameraGuid;  // 0x00F4, size 0x10
    UPROPERTY(EditAnywhere) FMovieSceneObjectBindingID CameraBindingID;  // 0x0104, size 0x18
    UPROPERTY() FTransform InitialCameraCutTransform;  // 0x0120, size 0x30
    UPROPERTY() bool bHasInitialCameraCutTransform;  // 0x0150, size 0x1
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FMovieSceneObjectBindingID GetCameraBindingID() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetCameraBindingID(const FMovieSceneObjectBindingID& InCameraBindingID);  // parameters 0x18
};
