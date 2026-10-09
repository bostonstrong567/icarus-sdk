// /Script/Landscape.LayerBlendInput
// size 0x48, declared in Engine/Source/Runtime/Landscape/Classes/Materials/MaterialExpressionLandscapeLayerBlend.h

USTRUCT()
struct FLayerBlendInput
{
public:
    UPROPERTY(EditAnywhere) FName LayerName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) TEnumAsByte<ELandscapeLayerBlendType> BlendType;  // 0x0008, size 0x1
    UPROPERTY() FExpressionInput LayerInput;  // 0x000C, size 0x14
    UPROPERTY() FExpressionInput HeightInput;  // 0x0020, size 0x14
    UPROPERTY(EditAnywhere) float PreviewWeight;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) FVector ConstLayerInput;  // 0x0038, size 0xC
    UPROPERTY(EditAnywhere) float ConstHeightInput;  // 0x0044, size 0x4
};
