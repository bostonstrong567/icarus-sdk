// /Script/GeometryCacheTracks.MovieSceneGeometryCacheSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x128, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCacheTracks/Classes/MovieSceneGeometryCacheSection.h

UCLASS(MinimalAPI)
class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{
public:
    UPROPERTY(EditAnywhere) FMovieSceneGeometryCacheParams Params;  // 0x00E8, size 0x40

    // Virtual functions that start here:
    //   MapTimeToAnimation
};
