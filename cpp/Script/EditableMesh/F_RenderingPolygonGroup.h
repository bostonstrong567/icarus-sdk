// /Script/EditableMesh.RenderingPolygonGroup
// size 0x48, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/EditableStaticMeshAdapter.h

USTRUCT()
struct FRenderingPolygonGroup
{
public:
    UPROPERTY() uint32 RenderingSectionIndex;  // 0x0000, size 0x4
    UPROPERTY() int32 MaterialIndex;  // 0x0004, size 0x4
    UPROPERTY() int32 MaxTriangles;  // 0x0008, size 0x4
    TMeshElementArray<FMeshTriangle,FTriangleID> Triangles;  // 0x0010, not reflected
};
