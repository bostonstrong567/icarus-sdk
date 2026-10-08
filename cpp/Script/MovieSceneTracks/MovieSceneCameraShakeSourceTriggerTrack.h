// /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
// Derives from: UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneCameraShakeSourceTriggerTrack.h

UCLASS()
class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack, public IMovieSceneTrackTemplateProducer
{
public:
    UPROPERTY() TArray<UMovieSceneSection*> Sections;  // 0x0098, size 0x10
};
