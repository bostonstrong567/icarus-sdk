// /Script/EditableMesh.AttributesForEdge
// size 0x18, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FAttributesForEdge
{
    UPROPERTY(BlueprintReadWrite) FEdgeID EdgeID;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) FMeshElementAttributeList EdgeAttributes;  // 0x0008, size 0x10
};
