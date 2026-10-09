// /Script/GeometryCache.GeometryCacheMeshData
// size 0xB0, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCache/Classes/GeometryCacheMeshData.h

USTRUCT()
struct FGeometryCacheMeshData
{
public:
    TArray<FVector,TSizedDefaultAllocator<32> > Positions;  // 0x0000, not reflected
    TArray<FVector2D,TSizedDefaultAllocator<32> > TextureCoordinates;  // 0x0010, not reflected
    TArray<FPackedNormal,TSizedDefaultAllocator<32> > TangentsX;  // 0x0020, not reflected
    TArray<FPackedNormal,TSizedDefaultAllocator<32> > TangentsZ;  // 0x0030, not reflected
    TArray<FColor,TSizedDefaultAllocator<32> > Colors;  // 0x0040, not reflected
    TArray<FVector,TSizedDefaultAllocator<32> > MotionVectors;  // 0x0050, not reflected
    TArray<FGeometryCacheMeshBatchInfo,TSizedDefaultAllocator<32> > BatchesInfo;  // 0x0060, not reflected
    FBox BoundingBox;  // 0x0070, not reflected
    TArray<unsigned int,TSizedDefaultAllocator<32> > Indices;  // 0x0090, not reflected
    FGeometryCacheVertexInfo VertexInfo;  // 0x00A0, not reflected
private:
    uint64 Hash;  // 0x00A8, not reflected
};
