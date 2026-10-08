// /Script/HairStrandsCore.GroomBuildSettings
// size 0xC, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomSettings.h

USTRUCT()
struct FGroomBuildSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bOverrideGuides;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HairToGuideDensity;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGroomInterpolationQuality InterpolationQuality;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGroomInterpolationWeight InterpolationDistance;  // 0x0009, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bRandomizeGuide;  // 0x000A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseUniqueGuide;  // 0x000B, size 0x1
};
