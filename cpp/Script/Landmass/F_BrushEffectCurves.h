// /Script/Landmass.BrushEffectCurves
// size 0x20, declared in Engine/Plugins/Experimental/Landmass/Source/Runtime/Public/BrushEffectsList.h

USTRUCT()
struct FBrushEffectCurves
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseCurveChannel;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* ElevationCurveAsset;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChannelEdgeOffset;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChannelDepth;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurveRampWidth;  // 0x0018, size 0x4
};
