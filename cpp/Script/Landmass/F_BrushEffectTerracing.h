// /Script/Landmass.BrushEffectTerracing
// size 0x14, declared in Engine/Plugins/Experimental/Landmass/Source/Runtime/Public/BrushEffectsList.h

USTRUCT()
struct FBrushEffectTerracing
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TerraceAlpha;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TerraceSpacing;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TerraceSmoothness;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaskLength;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaskStartOffset;  // 0x0010, size 0x4
};
