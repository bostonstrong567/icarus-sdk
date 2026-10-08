// /Script/Landmass.BrushEffectCurlNoise
// size 0x10, declared in Engine/Plugins/Experimental/Landmass/Source/Runtime/Public/BrushEffectsList.h

USTRUCT()
struct FBrushEffectCurlNoise
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Curl1Amount;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Curl2Amount;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Curl1Tiling;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Curl2Tiling;  // 0x000C, size 0x4
};
