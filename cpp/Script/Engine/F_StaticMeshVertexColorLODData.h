// /Script/Engine.StaticMeshVertexColorLODData
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Components/StaticMeshComponent.h

USTRUCT()
struct FStaticMeshVertexColorLODData
{
public:
    UPROPERTY() TArray<FPaintedVertex> PaintedVertices;  // 0x0000, size 0x10
    UPROPERTY() TArray<FColor> VertexBufferColors;  // 0x0010, size 0x10
    UPROPERTY() uint32 LODIndex;  // 0x0020, size 0x4
};
