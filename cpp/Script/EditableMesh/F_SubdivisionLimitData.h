// /Script/EditableMesh.SubdivisionLimitData
// size 0x30, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/EditableMesh/EditableMesh.generated.h

USTRUCT()
struct FSubdivisionLimitData
{
public:
    UPROPERTY(BlueprintReadWrite) TArray<FVector> VertexPositions;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadWrite) TArray<FSubdivisionLimitSection> Sections;  // 0x0010, size 0x10
    UPROPERTY(BlueprintReadWrite) TArray<FSubdividedWireEdge> SubdividedWireEdges;  // 0x0020, size 0x10
};
