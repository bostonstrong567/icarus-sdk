// /Script/MovieSceneTracks.MovieSceneParticleTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneParticleTrack.h

UCLASS(MinimalAPI)
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer
{
public:
    UPROPERTY() TArray<UMovieSceneSection*> ParticleSections;  // 0x0098, size 0x10

    // Virtual functions that start here:
    //   AddNewSection, GetAllParticleSections
};
