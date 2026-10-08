// /Script/Engine.MaterialExpressionMakeMaterialAttributes
// Derives from: UMaterialExpression > UObject
// size 0x270, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionMakeMaterialAttributes.h

UCLASS(MinimalAPI)
class UMaterialExpressionMakeMaterialAttributes : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput BaseColor;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput Metallic;  // 0x0054, size 0x14
    UPROPERTY() FExpressionInput Specular;  // 0x0068, size 0x14
    UPROPERTY() FExpressionInput Roughness;  // 0x007C, size 0x14
    UPROPERTY() FExpressionInput Anisotropy;  // 0x0090, size 0x14
    UPROPERTY() FExpressionInput EmissiveColor;  // 0x00A4, size 0x14
    UPROPERTY() FExpressionInput Opacity;  // 0x00B8, size 0x14
    UPROPERTY() FExpressionInput OpacityMask;  // 0x00CC, size 0x14
    UPROPERTY() FExpressionInput Normal;  // 0x00E0, size 0x14
    UPROPERTY() FExpressionInput Tangent;  // 0x00F4, size 0x14
    UPROPERTY() FExpressionInput WorldPositionOffset;  // 0x0108, size 0x14
    UPROPERTY() FExpressionInput WorldDisplacement;  // 0x011C, size 0x14
    UPROPERTY() FExpressionInput TessellationMultiplier;  // 0x0130, size 0x14
    UPROPERTY() FExpressionInput SubsurfaceColor;  // 0x0144, size 0x14
    UPROPERTY() FExpressionInput ClearCoat;  // 0x0158, size 0x14
    UPROPERTY() FExpressionInput ClearCoatRoughness;  // 0x016C, size 0x14
    UPROPERTY() FExpressionInput AmbientOcclusion;  // 0x0180, size 0x14
    UPROPERTY() FExpressionInput Refraction;  // 0x0194, size 0x14
    UPROPERTY() FExpressionInput CustomizedUVs;  // 0x01A8, size 0x14
    UPROPERTY() FExpressionInput PixelDepthOffset;  // 0x0248, size 0x14
    UPROPERTY() FExpressionInput ShadingModel;  // 0x025C, size 0x14
};
