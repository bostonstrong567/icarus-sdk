// /Script/Engine.MaterialExpressionConstantBiasScale
// Derives from: UMaterialExpression > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionConstantBiasScale.h

UCLASS(MinimalAPI)
class UMaterialExpressionConstantBiasScale : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Input;  // 0x0040, size 0x14
    UPROPERTY(EditAnywhere) float Bias;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere) float Scale;  // 0x0058, size 0x4
};
