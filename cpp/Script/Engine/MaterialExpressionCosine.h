// /Script/Engine.MaterialExpressionCosine
// Derives from: UMaterialExpression > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionCosine.h

UCLASS(MinimalAPI)
class UMaterialExpressionCosine : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Input;  // 0x0040, size 0x14
    UPROPERTY(EditAnywhere) float Period;  // 0x0054, size 0x4
};
