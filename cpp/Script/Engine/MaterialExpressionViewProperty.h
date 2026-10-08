// /Script/Engine.MaterialExpressionViewProperty
// Derives from: UMaterialExpression > UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionViewProperty.h

UCLASS(MinimalAPI)
class UMaterialExpressionViewProperty : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EMaterialExposedViewProperty> Property;  // 0x0040, size 0x1
};
