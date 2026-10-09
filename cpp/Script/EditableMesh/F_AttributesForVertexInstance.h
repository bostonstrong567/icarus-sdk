// /Script/EditableMesh.AttributesForVertexInstance
// size 0x18, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FAttributesForVertexInstance
{
public:
    UPROPERTY(BlueprintReadWrite) FVertexInstanceID VertexInstanceID;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) FMeshElementAttributeList VertexInstanceAttributes;  // 0x0008, size 0x10
};
