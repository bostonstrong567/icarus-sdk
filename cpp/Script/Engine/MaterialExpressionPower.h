// /Script/Engine.MaterialExpressionPower
// Derives from: UMaterialExpression > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionPower.h

UCLASS(MinimalAPI)
class UMaterialExpressionPower : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Base;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput Exponent;  // 0x0054, size 0x14
    UPROPERTY(EditAnywhere) float ConstExponent;  // 0x0068, size 0x4
};
