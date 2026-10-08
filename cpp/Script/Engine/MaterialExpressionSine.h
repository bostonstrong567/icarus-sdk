// /Script/Engine.MaterialExpressionSine
// Derives from: UMaterialExpression > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionSine.h

UCLASS(MinimalAPI)
class UMaterialExpressionSine : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Input;  // 0x0040, size 0x14
    UPROPERTY(EditAnywhere) float Period;  // 0x0054, size 0x4
};
