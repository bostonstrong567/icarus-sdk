// /Script/EditableMesh.MeshElementAttributeData
// size 0x60, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FMeshElementAttributeData
{
    UPROPERTY(BlueprintReadWrite) FName AttributeName;  // 0x0000, size 0x8
    UPROPERTY(BlueprintReadWrite) int32 AttributeIndex;  // 0x0008, size 0x4
    UPROPERTY(BlueprintReadWrite) FMeshElementAttributeValue AttributeValue;  // 0x0010, size 0x50
};
