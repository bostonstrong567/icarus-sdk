// /Script/Landmass.LandmassBrushEffectsList
// size 0x60, declared in Engine/Plugins/Experimental/Landmass/Source/Runtime/Public/BrushEffectsList.h

USTRUCT()
struct FLandmassBrushEffectsList
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBrushEffectBlurring Blurring;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBrushEffectCurlNoise CurlNoise;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBrushEffectDisplacement Displacement;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBrushEffectSmoothBlending SmoothBlending;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBrushEffectTerracing Terracing;  // 0x0048, size 0x14
};
