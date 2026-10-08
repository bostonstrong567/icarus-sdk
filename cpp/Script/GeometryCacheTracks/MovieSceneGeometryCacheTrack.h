// /Script/GeometryCacheTracks.MovieSceneGeometryCacheTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA8, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCacheTracks/Classes/MovieSceneGeometryCacheTrack.h

UCLASS(MinimalAPI)
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer
{
public:
    UPROPERTY() TArray<UMovieSceneSection*> AnimationSections;  // 0x0098, size 0x10

    // Virtual functions that start here:
    //   AddNewAnimation
};
