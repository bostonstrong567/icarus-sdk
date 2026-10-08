// /Script/Engine.MaterialExpressionTextureProperty
// Derives from: UMaterialExpression > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTextureProperty.h

UCLASS()
class UMaterialExpressionTextureProperty : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput TextureObject;  // 0x0040, size 0x14
    UPROPERTY(EditAnywhere) TEnumAsByte<EMaterialExposedTextureProperty> Property;  // 0x0054, size 0x1
};
