// /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
// size 0x38, declared in Engine/Plugins/Experimental/GeometryCollectionPlugin/Source/GeometryCollectionTracks/Public/MovieSceneGeometryCollectionTemplate.h

USTRUCT()
struct FMovieSceneGeometryCollectionSectionTemplateParameters : public FMovieSceneGeometryCollectionParams
{
    UPROPERTY() FFrameNumber SectionStartTime;  // 0x0030, size 0x4
    UPROPERTY() FFrameNumber SectionEndTime;  // 0x0034, size 0x4
};
