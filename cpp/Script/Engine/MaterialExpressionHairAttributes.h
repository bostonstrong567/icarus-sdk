// /Script/Engine.MaterialExpressionHairAttributes
// Derives from: UMaterialExpression > UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionHairAttributes.h

UCLASS(MinimalAPI)
class UMaterialExpressionHairAttributes : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) uint8 bUseTangentSpace : 1;  // 0x0040, mask 0x01
};
