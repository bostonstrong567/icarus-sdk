// /Script/MovieSceneTracks.MovieSceneComponentMaterialTrack
// Derives from: UMovieSceneMaterialTrack > UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xB0, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneMaterialTrack.h

UCLASS(MinimalAPI)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack, public IMovieSceneTrackTemplateProducer
{
public:
    UPROPERTY() int32 MaterialIndex;  // 0x00A8, size 0x4
};
