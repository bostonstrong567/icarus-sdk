// /Script/Engine.MaterialExpressionRuntimeVirtualTextureOutput
// Derives from: UMaterialExpressionCustomOutput > UMaterialExpression > UObject
// size 0xD0, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionRuntimeVirtualTextureOutput.h

UCLASS()
class UMaterialExpressionRuntimeVirtualTextureOutput : public UMaterialExpressionCustomOutput
{
public:
    UPROPERTY() FExpressionInput BaseColor;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput Specular;  // 0x0054, size 0x14
    UPROPERTY() FExpressionInput Roughness;  // 0x0068, size 0x14
    UPROPERTY() FExpressionInput Normal;  // 0x007C, size 0x14
    UPROPERTY() FExpressionInput WorldHeight;  // 0x0090, size 0x14
    UPROPERTY() FExpressionInput Opacity;  // 0x00A4, size 0x14
    UPROPERTY() FExpressionInput Mask;  // 0x00B8, size 0x14
};
