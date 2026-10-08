// /Script/Engine.MaterialExpressionLinearInterpolate
// Derives from: UMaterialExpression > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionLinearInterpolate.h

UCLASS(MinimalAPI)
class UMaterialExpressionLinearInterpolate : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput A;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput B;  // 0x0054, size 0x14
    UPROPERTY() FExpressionInput Alpha;  // 0x0068, size 0x14
    UPROPERTY(EditAnywhere) float ConstA;  // 0x007C, size 0x4
    UPROPERTY(EditAnywhere) float ConstB;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere) float ConstAlpha;  // 0x0084, size 0x4
};
