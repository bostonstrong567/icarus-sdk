// /Script/Engine.MaterialInstanceBasePropertyOverrides
// size 0x8, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h

USTRUCT()
struct FMaterialInstanceBasePropertyOverrides
{
    UPROPERTY(EditAnywhere) uint8 bOverride_OpacityMaskClipValue : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOverride_BlendMode : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bOverride_ShadingModel : 1;  // 0x0000, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bOverride_DitheredLODTransition : 1;  // 0x0000, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bOverride_CastDynamicShadowAsMasked : 1;  // 0x0000, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bOverride_TwoSided : 1;  // 0x0000, mask 0x20
    UPROPERTY(EditAnywhere) uint8 TwoSided : 1;  // 0x0000, mask 0x40
    UPROPERTY(EditAnywhere) uint8 DitheredLODTransition : 1;  // 0x0000, mask 0x80
    UPROPERTY(EditAnywhere) uint8 bCastDynamicShadowAsMasked : 1;  // 0x0001, mask 0x01
    UPROPERTY(EditAnywhere) TEnumAsByte<EBlendMode> BlendMode;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EMaterialShadingModel> ShadingModel;  // 0x0003, size 0x1
    UPROPERTY(EditAnywhere) float OpacityMaskClipValue;  // 0x0004, size 0x4
};
