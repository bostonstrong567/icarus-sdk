// /Script/EditableMesh.SubdividedWireEdge
// size 0xC, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FSubdividedWireEdge
{
    UPROPERTY(BlueprintReadWrite) int32 EdgeVertex0PositionIndex;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 EdgeVertex1PositionIndex;  // 0x0004, size 0x4

    // Not reflected:
    FEdgeID CounterpartEdgeID;  // 0x0008
};
