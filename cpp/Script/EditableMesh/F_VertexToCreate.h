// /Script/EditableMesh.VertexToCreate
// size 0x18, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FVertexToCreate
{
    UPROPERTY(BlueprintReadWrite) FMeshElementAttributeList VertexAttributes;  // 0x0000, size 0x10
    UPROPERTY() FVertexID OriginalVertexID;  // 0x0010, size 0x4
};
