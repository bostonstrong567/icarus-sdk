// /Script/Engine.MaterialExpressionDotProduct
// Derives from: UMaterialExpression > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionDotProduct.h

UCLASS(MinimalAPI)
class UMaterialExpressionDotProduct : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput A;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput B;  // 0x0054, size 0x14
};
