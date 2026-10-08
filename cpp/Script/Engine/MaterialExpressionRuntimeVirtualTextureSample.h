// /Script/Engine.MaterialExpressionRuntimeVirtualTextureSample
// Derives from: UMaterialExpression > UObject
// size 0x90, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionRuntimeVirtualTextureSample.h

UCLASS()
class UMaterialExpressionRuntimeVirtualTextureSample : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Coordinates;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput WorldPosition;  // 0x0054, size 0x14
    UPROPERTY() FExpressionInput MipValue;  // 0x0068, size 0x14
    UPROPERTY(EditAnywhere) URuntimeVirtualTexture* VirtualTexture;  // 0x0080, size 0x8
    UPROPERTY(EditAnywhere) ERuntimeVirtualTextureMaterialType MaterialType;  // 0x0088, size 0x1
    UPROPERTY(EditAnywhere) bool bSinglePhysicalSpace;  // 0x0089, size 0x1
    UPROPERTY(EditAnywhere) bool bAdaptive;  // 0x008A, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ERuntimeVirtualTextureMipValueMode> MipValueMode;  // 0x008B, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ERuntimeVirtualTextureTextureAddressMode> TextureAddressMode;  // 0x008C, size 0x1
};
