// /Script/Engine.MaterialExpressionStep
// Derives from: UMaterialExpression > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionStep.h

UCLASS(MinimalAPI)
class UMaterialExpressionStep : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Y;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput X;  // 0x0054, size 0x14
    UPROPERTY(EditAnywhere) float ConstY;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere) float ConstX;  // 0x006C, size 0x4
};
