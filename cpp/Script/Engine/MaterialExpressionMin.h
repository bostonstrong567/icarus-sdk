// /Script/Engine.MaterialExpressionMin
// Derives from: UMaterialExpression > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionMin.h

UCLASS(MinimalAPI)
class UMaterialExpressionMin : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput A;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput B;  // 0x0054, size 0x14
    UPROPERTY(EditAnywhere) float ConstA;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere) float ConstB;  // 0x006C, size 0x4
};
