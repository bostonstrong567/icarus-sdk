// /Script/EditableMesh.RenderingPolygon
// size 0x18, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/EditableStaticMeshAdapter.h

USTRUCT()
struct FRenderingPolygon
{
    UPROPERTY() FPolygonGroupID PolygonGroupID;  // 0x0000, size 0x4
    UPROPERTY() TArray<FTriangleID> TriangulatedPolygonTriangleIndices;  // 0x0008, size 0x10
};
