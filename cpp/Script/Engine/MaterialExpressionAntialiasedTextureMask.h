// /Script/Engine.MaterialExpressionAntialiasedTextureMask
// Derives from: UMaterialExpressionTextureSampleParameter2D > UMaterialExpressionTextureSampleParameter > UMaterialExpressionTextureSample > UMaterialExpressionTextureBase > UMaterialExpression > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionAntialiasedTextureMask.h

UCLASS(MinimalAPI)
class UMaterialExpressionAntialiasedTextureMask : public UMaterialExpressionTextureSampleParameter2D
{
public:
    UPROPERTY(EditAnywhere) float Threshold;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<ETextureColorChannel> Channel;  // 0x0084, size 0x1
};
