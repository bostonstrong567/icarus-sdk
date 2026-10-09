// /Script/MovieSceneTracks.MovieSceneCameraAnimTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneCameraAnimTrack.h

UCLASS(MinimalAPI)
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<UMovieSceneSection*> CameraAnimSections;  // 0x0098, size 0x10

    // Virtual functions that start here:
    //   AddNewCameraAnim
};
