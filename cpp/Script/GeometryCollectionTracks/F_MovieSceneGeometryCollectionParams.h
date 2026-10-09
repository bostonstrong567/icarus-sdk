// /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionParams
// size 0x30, declared in Engine/Plugins/Experimental/GeometryCollectionPlugin/Source/GeometryCollectionTracks/Public/MovieSceneGeometryCollectionSection.h

USTRUCT()
struct FMovieSceneGeometryCollectionParams
{
public:
    UPROPERTY(EditAnywhere) FSoftObjectPath GeometryCollectionCache;  // 0x0008, size 0x18
    UPROPERTY(EditAnywhere) FFrameNumber StartFrameOffset;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) FFrameNumber EndFrameOffset;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) float PlayRate;  // 0x0028, size 0x4
};
