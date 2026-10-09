// /Script/Engine.MeshVertexPainterKismetLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/MeshVertexPainter/MeshVertexPainterKismetLibrary.h

UCLASS(MinimalAPI)
class UMeshVertexPainterKismetLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void PaintVerticesLerpAlongAxis(UStaticMeshComponent* StaticMeshComponent, const FLinearColor& StartColor, const FLinearColor& EndColor, EVertexPaintAxis Axis, bool bConvertToSRGB);  // parameters 0x2A
    UFUNCTION(BlueprintCallable) static void PaintVerticesSingleColor(UStaticMeshComponent* StaticMeshComponent, const FLinearColor& FillColor, bool bConvertToSRGB);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void RemovePaintedVertices(UStaticMeshComponent* StaticMeshComponent);  // parameters 0x8
};
