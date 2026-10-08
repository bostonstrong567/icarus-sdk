// /Script/MovieSceneTracks.MovieSceneParticleParameterTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneParticleParameterTrack.h

UCLASS(MinimalAPI)
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer
{
public:
    UPROPERTY() TArray<UMovieSceneSection*> Sections;  // 0x0098, size 0x10
};
