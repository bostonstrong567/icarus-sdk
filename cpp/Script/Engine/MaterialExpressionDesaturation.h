// /Script/Engine.MaterialExpressionDesaturation
// Derives from: UMaterialExpression > UObject
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionDesaturation.h

UCLASS(MinimalAPI)
class UMaterialExpressionDesaturation : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Input;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput Fraction;  // 0x0054, size 0x14
    UPROPERTY(EditAnywhere) FLinearColor LuminanceFactors;  // 0x0068, size 0x10
};
