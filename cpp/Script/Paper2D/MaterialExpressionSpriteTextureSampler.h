// /Script/Paper2D.MaterialExpressionSpriteTextureSampler
// Derives from: UMaterialExpressionTextureSampleParameter2D > UMaterialExpressionTextureSampleParameter > UMaterialExpressionTextureSample > UMaterialExpressionTextureBase > UMaterialExpression > UObject
// size 0xA0, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Public/MaterialExpressionSpriteTextureSampler.h

UCLASS()
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
public:
    UPROPERTY(EditAnywhere) bool bSampleAdditionalTextures;  // 0x0080, size 0x1
    UPROPERTY(EditAnywhere) int32 AdditionalSlotIndex;  // 0x0084, size 0x4
    UPROPERTY(EditAnywhere) FText SlotDisplayName;  // 0x0088, size 0x18
};
