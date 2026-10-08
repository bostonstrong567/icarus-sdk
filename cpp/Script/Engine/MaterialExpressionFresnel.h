// /Script/Engine.MaterialExpressionFresnel
// Derives from: UMaterialExpression > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionFresnel.h

UCLASS(MinimalAPI)
class UMaterialExpressionFresnel : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput ExponentIn;  // 0x0040, size 0x14
    UPROPERTY(EditAnywhere) float Exponent;  // 0x0054, size 0x4
    UPROPERTY() FExpressionInput BaseReflectFractionIn;  // 0x0058, size 0x14
    UPROPERTY(EditAnywhere) float BaseReflectFraction;  // 0x006C, size 0x4
    UPROPERTY() FExpressionInput Normal;  // 0x0070, size 0x14
};
