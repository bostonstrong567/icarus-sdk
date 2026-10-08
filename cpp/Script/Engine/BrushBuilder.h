// /Script/Engine.BrushBuilder
// Derives from: UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Engine/BrushBuilder.h

UCLASS(Abstract, MinimalAPI)
class UBrushBuilder : public UObject
{
public:
    UPROPERTY() FString BitmapFilename;  // 0x0028, size 0x10
    UPROPERTY() FString ToolTip;  // 0x0038, size 0x10
    UPROPERTY(Transient) uint8 NotifyBadParams : 1;  // 0x0048, mask 0x01
    UPROPERTY() TArray<FVector> Vertices;  // 0x0050, size 0x10
    UPROPERTY() TArray<FBuilderPoly> Polys;  // 0x0060, size 0x10
    UPROPERTY() FName Layer;  // 0x0070, size 0x8
    UPROPERTY() uint8 MergeCoplanars : 1;  // 0x0078, mask 0x01

    // Virtual functions that start here:
    //   BadParameters, BeginBrush, Build, EndBrush, GetPolyCount, GetVertex, GetVertexCount, Poly3i, Poly4i
    //   PolyBegin, PolyEnd, Polyi, Vertex3f, Vertexv
};
