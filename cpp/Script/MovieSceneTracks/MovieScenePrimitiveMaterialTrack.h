// /Script/MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Derives from: UMovieScenePropertyTrack > UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xD0, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieScenePrimitiveMaterialTrack.h

UCLASS(MinimalAPI)
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer
{
public:
    UPROPERTY() int32 MaterialIndex;  // 0x00C8, size 0x4
};
