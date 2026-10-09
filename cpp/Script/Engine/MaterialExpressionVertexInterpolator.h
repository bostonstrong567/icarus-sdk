// /Script/Engine.MaterialExpressionVertexInterpolator
// Derives from: UMaterialExpressionCustomOutput > UMaterialExpression > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionVertexInterpolator.h

UCLASS(MinimalAPI)
class UMaterialExpressionVertexInterpolator : public UMaterialExpressionCustomOutput
{
public:
    UPROPERTY() FExpressionInput Input;  // 0x0040, size 0x14
    int32 InterpolatorIndex;  // 0x0054, not reflected
    EMaterialValueType InterpolatedType;  // 0x0058, not reflected
    int32 InterpolatorOffset;  // 0x005C, not reflected
};
