// /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Derives from: UMovieSceneMaterialTrack > UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xB0, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneMaterialParameterCollectionTrack.h

UCLASS()
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack, public IMovieSceneTrackTemplateProducer
{
public:
    UPROPERTY(EditAnywhere) UMaterialParameterCollection* MPC;  // 0x00A8, size 0x8
};
