// /Script/EditableMesh.VertexInstancesForPolygonHole
// size 0x10, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FVertexInstancesForPolygonHole
{
public:
    UPROPERTY(BlueprintReadWrite) TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs;  // 0x0000, size 0x10
};
