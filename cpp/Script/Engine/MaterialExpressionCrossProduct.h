// /Script/Engine.MaterialExpressionCrossProduct
// Derives from: UMaterialExpression > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionCrossProduct.h

UCLASS(MinimalAPI)
class UMaterialExpressionCrossProduct : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput A;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput B;  // 0x0054, size 0x14
};
