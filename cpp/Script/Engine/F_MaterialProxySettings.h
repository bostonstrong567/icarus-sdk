// /Script/Engine.MaterialProxySettings
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Engine/MaterialMerging.h

USTRUCT()
struct FMaterialProxySettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIntPoint TextureSize;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GutterSpace;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MetallicConstant;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RoughnessConstant;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AnisotropyConstant;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpecularConstant;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OpacityConstant;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OpacityMaskConstant;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AmbientOcclusionConstant;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ETextureSizingType> TextureSizingType;  // 0x0028, size 0x1
    UPROPERTY() TEnumAsByte<EMaterialMergeType> MaterialMergeType;  // 0x0029, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EBlendMode> BlendMode;  // 0x002A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAllowTwoSidedMaterial : 1;  // 0x002B, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bNormalMap : 1;  // 0x002B, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bTangentMap : 1;  // 0x002B, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bMetallicMap : 1;  // 0x002B, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRoughnessMap : 1;  // 0x002B, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAnisotropyMap : 1;  // 0x002B, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSpecularMap : 1;  // 0x002B, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEmissiveMap : 1;  // 0x002B, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOpacityMap : 1;  // 0x002C, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOpacityMaskMap : 1;  // 0x002C, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAmbientOcclusionMap : 1;  // 0x002C, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIntPoint DiffuseTextureSize;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIntPoint NormalTextureSize;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIntPoint TangentTextureSize;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIntPoint MetallicTextureSize;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIntPoint RoughnessTextureSize;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIntPoint AnisotropyTextureSize;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIntPoint SpecularTextureSize;  // 0x0060, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIntPoint EmissiveTextureSize;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIntPoint OpacityTextureSize;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIntPoint OpacityMaskTextureSize;  // 0x0078, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIntPoint AmbientOcclusionTextureSize;  // 0x0080, size 0x8
};
