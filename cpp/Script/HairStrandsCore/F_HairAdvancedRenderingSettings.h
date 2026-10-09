// /Script/HairStrandsCore.HairAdvancedRenderingSettings
// size 0x2, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetRendering.h

USTRUCT()
struct FHairAdvancedRenderingSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bUseStableRasterization;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bScatterSceneLighting;  // 0x0001, size 0x1
};
