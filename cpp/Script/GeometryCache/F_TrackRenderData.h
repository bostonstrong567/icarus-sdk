// /Script/GeometryCache.TrackRenderData
// size 0x70, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCache/Classes/GeometryCacheComponent.h

USTRUCT()
struct FTrackRenderData
{
public:
    FMatrix Matrix;  // 0x0000, not reflected
    FBox BoundingBox;  // 0x0040, not reflected
    int32 MatrixSampleIndex;  // 0x005C, not reflected
    int32 BoundsSampleIndex;  // 0x0060, not reflected
};
