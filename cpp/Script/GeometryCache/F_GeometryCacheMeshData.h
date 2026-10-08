// /Script/GeometryCache.GeometryCacheMeshData
// size 0xB0, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCache/Classes/GeometryCacheMeshData.h

USTRUCT()
struct FGeometryCacheMeshData
{

    // Not reflected:
    TArray<FVector,TSizedDefaultAllocator<32> > Positions;  // 0x0000
    TArray<FVector2D,TSizedDefaultAllocator<32> > TextureCoordinates;  // 0x0010
    TArray<FPackedNormal,TSizedDefaultAllocator<32> > TangentsX;  // 0x0020
    TArray<FPackedNormal,TSizedDefaultAllocator<32> > TangentsZ;  // 0x0030
    TArray<FColor,TSizedDefaultAllocator<32> > Colors;  // 0x0040
    TArray<FVector,TSizedDefaultAllocator<32> > MotionVectors;  // 0x0050
    TArray<FGeometryCacheMeshBatchInfo,TSizedDefaultAllocator<32> > BatchesInfo;  // 0x0060
    FBox BoundingBox;  // 0x0070
    TArray<unsigned int,TSizedDefaultAllocator<32> > Indices;  // 0x0090
    FGeometryCacheVertexInfo VertexInfo;  // 0x00A0
    uint64 Hash;  // 0x00A8
};
