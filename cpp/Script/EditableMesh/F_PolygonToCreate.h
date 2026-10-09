// /Script/EditableMesh.PolygonToCreate
// size 0x20, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FPolygonToCreate
{
public:
    UPROPERTY(BlueprintReadWrite) FPolygonGroupID PolygonGroupID;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) TArray<FVertexAndAttributes> PerimeterVertices;  // 0x0008, size 0x10
    UPROPERTY(BlueprintReadWrite) FPolygonID OriginalPolygonID;  // 0x0018, size 0x4
    UPROPERTY(BlueprintReadWrite) EPolygonEdgeHardness PolygonEdgeHardness;  // 0x001C, size 0x1
};
