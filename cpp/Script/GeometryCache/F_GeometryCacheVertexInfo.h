// /Script/GeometryCache.GeometryCacheVertexInfo
// size 0x8, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCache/Classes/GeometryCacheMeshData.h

USTRUCT()
struct FGeometryCacheVertexInfo
{
public:
    bool bHasTangentX;  // 0x0000, not reflected
    bool bHasTangentZ;  // 0x0001, not reflected
    bool bHasUV0;  // 0x0002, not reflected
    bool bHasColor0;  // 0x0003, not reflected
    bool bHasMotionVectors;  // 0x0004, not reflected
    bool bConstantUV0;  // 0x0005, not reflected
    bool bConstantColor0;  // 0x0006, not reflected
    bool bConstantIndices;  // 0x0007, not reflected
};
