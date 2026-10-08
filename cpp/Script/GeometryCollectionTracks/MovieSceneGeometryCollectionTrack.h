// /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA8, declared in Engine/Plugins/Experimental/GeometryCollectionPlugin/Source/GeometryCollectionTracks/Public/MovieSceneGeometryCollectionTrack.h

UCLASS(MinimalAPI)
class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer
{
public:
    UPROPERTY() TArray<UMovieSceneSection*> AnimationSections;  // 0x0098, size 0x10

    // Virtual functions that start here:
    //   AddNewAnimation
};
