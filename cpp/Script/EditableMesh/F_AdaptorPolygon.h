// /Script/EditableMesh.AdaptorPolygon
// size 0x18, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/EditableGeometryCollectionAdapter.h

USTRUCT()
struct FAdaptorPolygon
{
public:
    UPROPERTY() FPolygonGroupID PolygonGroupID;  // 0x0000, size 0x4
    UPROPERTY() TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices;  // 0x0008, size 0x10
};
