// /Script/EditableMesh.AttributesForVertex
// size 0x18, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FAttributesForVertex
{
public:
    UPROPERTY(BlueprintReadWrite) FVertexID VertexID;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) FMeshElementAttributeList VertexAttributes;  // 0x0008, size 0x10
};
