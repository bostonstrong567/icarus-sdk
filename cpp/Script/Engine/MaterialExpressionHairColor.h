// /Script/Engine.MaterialExpressionHairColor
// Derives from: UMaterialExpression > UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionHairColor.h

UCLASS(MinimalAPI)
class UMaterialExpressionHairColor : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Melanin;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput Redness;  // 0x0054, size 0x14
    UPROPERTY() FExpressionInput DyeColor;  // 0x0068, size 0x14
};
