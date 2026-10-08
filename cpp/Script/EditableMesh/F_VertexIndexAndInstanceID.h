// /Script/EditableMesh.VertexIndexAndInstanceID
// size 0x8, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FVertexIndexAndInstanceID
{
    UPROPERTY(BlueprintReadWrite) int32 ContourIndex;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) FVertexInstanceID VertexInstanceID;  // 0x0004, size 0x4
};
