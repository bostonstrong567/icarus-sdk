// /Script/EditableMesh.VertexAttributesForPolygon
// size 0x28, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FVertexAttributesForPolygon
{
    UPROPERTY(BlueprintReadWrite) FPolygonID PolygonID;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists;  // 0x0008, size 0x10
    UPROPERTY(BlueprintReadWrite) TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole;  // 0x0018, size 0x10
};
