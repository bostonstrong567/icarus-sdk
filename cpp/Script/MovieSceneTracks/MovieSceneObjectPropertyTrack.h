// /Script/MovieSceneTracks.MovieSceneObjectPropertyTrack
// Derives from: UMovieScenePropertyTrack > UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xD0, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneObjectPropertyTrack.h

UCLASS(MinimalAPI)
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer
{
public:
    UPROPERTY() TSubclassOf<UObject> PropertyClass;  // 0x00C8, size 0x8
};
