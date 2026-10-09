// /Script/EditableMesh.VertexInstanceToCreate
// size 0x20, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FVertexInstanceToCreate
{
public:
    UPROPERTY(BlueprintReadWrite) FVertexID VertexID;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) FMeshElementAttributeList VertexInstanceAttributes;  // 0x0008, size 0x10
    UPROPERTY() FVertexInstanceID OriginalVertexInstanceID;  // 0x0018, size 0x4
};
