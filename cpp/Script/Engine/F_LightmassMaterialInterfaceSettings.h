// /Script/Engine.LightmassMaterialInterfaceSettings
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialInterface.h

USTRUCT()
struct FLightmassMaterialInterfaceSettings
{
public:
    UPROPERTY() float EmissiveBoost;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float DiffuseBoost;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float ExportResolutionScale;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) uint8 bCastShadowAsMasked : 1;  // 0x000C, mask 0x01
    UPROPERTY() uint8 bOverrideCastShadowAsMasked : 1;  // 0x000C, mask 0x02
    UPROPERTY() uint8 bOverrideEmissiveBoost : 1;  // 0x000C, mask 0x04
    UPROPERTY() uint8 bOverrideDiffuseBoost : 1;  // 0x000C, mask 0x08
    UPROPERTY() uint8 bOverrideExportResolutionScale : 1;  // 0x000C, mask 0x10
};
