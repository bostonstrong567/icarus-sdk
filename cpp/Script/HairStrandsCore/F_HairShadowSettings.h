// /Script/HairStrandsCore.HairShadowSettings
// size 0xC, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetRendering.h

USTRUCT()
struct FHairShadowSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HairShadowDensity;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HairRaytracingRadiusScale;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseHairRaytracingGeometry;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bVoxelize;  // 0x0009, size 0x1
};
