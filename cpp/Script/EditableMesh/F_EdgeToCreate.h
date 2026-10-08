// /Script/EditableMesh.EdgeToCreate
// size 0x20, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FEdgeToCreate
{
    UPROPERTY(BlueprintReadWrite) FVertexID VertexID0;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) FVertexID VertexID1;  // 0x0004, size 0x4
    UPROPERTY(BlueprintReadWrite) FMeshElementAttributeList EdgeAttributes;  // 0x0008, size 0x10
    UPROPERTY(BlueprintReadWrite) FEdgeID OriginalEdgeID;  // 0x0018, size 0x4
};
