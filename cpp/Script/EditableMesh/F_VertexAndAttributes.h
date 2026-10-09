// /Script/EditableMesh.VertexAndAttributes
// size 0x18, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FVertexAndAttributes
{
public:
    UPROPERTY(BlueprintReadWrite) FVertexInstanceID VertexInstanceID;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) FVertexID VertexID;  // 0x0004, size 0x4
    UPROPERTY(BlueprintReadWrite) FMeshElementAttributeList PolygonVertexAttributes;  // 0x0008, size 0x10
};
