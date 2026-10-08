// /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneCameraShakeSourceShakeTrack.h

UCLASS(MinimalAPI)
class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer
{
public:
    UPROPERTY() TArray<UMovieSceneSection*> CameraShakeSections;  // 0x0098, size 0x10
};
