// /Script/GeometryCache.TrackRenderData
// size 0x70, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCache/Classes/GeometryCacheComponent.h

USTRUCT()
struct FTrackRenderData
{

    // Not reflected:
    FMatrix Matrix;  // 0x0000
    FBox BoundingBox;  // 0x0040
    int32 MatrixSampleIndex;  // 0x005C
    int32 BoundsSampleIndex;  // 0x0060
};
