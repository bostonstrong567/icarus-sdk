// /Script/EditableMesh.VertexToMove
// size 0x10, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FVertexToMove
{
    UPROPERTY(BlueprintReadWrite) FVertexID VertexID;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) FVector NewVertexPosition;  // 0x0004, size 0xC
};
