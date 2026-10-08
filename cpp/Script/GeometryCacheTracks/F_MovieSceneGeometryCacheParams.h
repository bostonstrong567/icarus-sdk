// /Script/GeometryCacheTracks.MovieSceneGeometryCacheParams
// size 0x40, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCacheTracks/Classes/MovieSceneGeometryCacheSection.h

USTRUCT()
struct FMovieSceneGeometryCacheParams
{
    UPROPERTY(EditAnywhere) UGeometryCache* GeometryCacheAsset;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FFrameNumber FirstLoopStartFrameOffset;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) FFrameNumber StartFrameOffset;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) FFrameNumber EndFrameOffset;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float PlayRate;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) uint8 bReverse : 1;  // 0x0018, mask 0x01
    UPROPERTY(Deprecated) float StartOffset;  // 0x001C, size 0x4
    UPROPERTY(Deprecated) float EndOffset;  // 0x0020, size 0x4
    UPROPERTY(Deprecated) FSoftObjectPath GeometryCache;  // 0x0028, size 0x18
};
