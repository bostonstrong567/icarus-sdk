// /Script/HairStrandsCore.HairCardsTextureSettings
// size 0x10, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetCards.h

USTRUCT()
struct FHairCardsTextureSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AtlasMaxResolution;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PixelPerCentimeters;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LengthTextureCount;  // 0x0008, size 0x4
    UPROPERTY() int32 DensityTextureCount;  // 0x000C, size 0x4
};
