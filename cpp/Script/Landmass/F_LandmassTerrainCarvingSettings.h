// /Script/Landmass.LandmassTerrainCarvingSettings
// size 0x80, declared in Engine/Plugins/Experimental/Landmass/Source/Runtime/Public/TerrainCarvingSettings.h

USTRUCT()
struct FLandmassTerrainCarvingSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EBrushBlendType BlendMode;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bInvertShape;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLandmassFalloffSettings FalloffSettings;  // 0x0004, size 0x14
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLandmassBrushEffectsList Effects;  // 0x0018, size 0x60
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Priority;  // 0x0078, size 0x4
};
