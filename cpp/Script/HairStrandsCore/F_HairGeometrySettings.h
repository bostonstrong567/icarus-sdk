// /Script/HairStrandsCore.HairGeometrySettings
// size 0x10, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetRendering.h

USTRUCT()
struct FHairGeometrySettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HairWidth;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HairRootScale;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HairTipScale;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HairClipScale;  // 0x000C, size 0x4
};
