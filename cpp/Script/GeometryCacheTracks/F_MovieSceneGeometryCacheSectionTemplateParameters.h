// /Script/GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
// size 0x48, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCacheTracks/Private/MovieSceneGeometryCacheTemplate.h

USTRUCT()
struct FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams
{
    UPROPERTY() FFrameNumber SectionStartTime;  // 0x0040, size 0x4
    UPROPERTY() FFrameNumber SectionEndTime;  // 0x0044, size 0x4
};
