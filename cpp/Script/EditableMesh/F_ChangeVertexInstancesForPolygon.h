// /Script/EditableMesh.ChangeVertexInstancesForPolygon
// size 0x28, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FChangeVertexInstancesForPolygon
{
public:
    UPROPERTY(BlueprintReadWrite) FPolygonID PolygonID;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs;  // 0x0008, size 0x10
    UPROPERTY(BlueprintReadWrite) TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole;  // 0x0018, size 0x10
};
