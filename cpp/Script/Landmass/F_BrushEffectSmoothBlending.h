// /Script/Landmass.BrushEffectSmoothBlending
// size 0x8, declared in Engine/Plugins/Experimental/Landmass/Source/Runtime/Public/BrushEffectsList.h

USTRUCT()
struct FBrushEffectSmoothBlending
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InnerSmoothDistance;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OuterSmoothDistance;  // 0x0004, size 0x4
};
