// /Script/Landmass.BrushEffectBlurring
// size 0x8, declared in Engine/Plugins/Experimental/Landmass/Source/Runtime/Public/BrushEffectsList.h

USTRUCT()
struct FBrushEffectBlurring
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bBlurShape;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Radius;  // 0x0004, size 0x4
};
