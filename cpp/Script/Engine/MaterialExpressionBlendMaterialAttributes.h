// /Script/Engine.MaterialExpressionBlendMaterialAttributes
// Derives from: UMaterialExpression > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionBlendMaterialAttributes.h

UCLASS(MinimalAPI)
class UMaterialExpressionBlendMaterialAttributes : public UMaterialExpression
{
public:
    UPROPERTY() FMaterialAttributesInput A;  // 0x0040, size 0x18
    UPROPERTY() FMaterialAttributesInput B;  // 0x0058, size 0x18
    UPROPERTY() FExpressionInput Alpha;  // 0x0070, size 0x14
    UPROPERTY(EditAnywhere) TEnumAsByte<EMaterialAttributeBlend> PixelAttributeBlendType;  // 0x0084, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EMaterialAttributeBlend> VertexAttributeBlendType;  // 0x0085, size 0x1
};
