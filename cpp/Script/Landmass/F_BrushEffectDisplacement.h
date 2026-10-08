// /Script/Landmass.BrushEffectDisplacement
// size 0x28, declared in Engine/Plugins/Experimental/Landmass/Source/Runtime/Public/BrushEffectsList.h

USTRUCT()
struct FBrushEffectDisplacement
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DisplacementHeight;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DisplacementTiling;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Texture;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Midpoint;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Channel;  // 0x0014, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeightmapInfluence;  // 0x0024, size 0x4
};
