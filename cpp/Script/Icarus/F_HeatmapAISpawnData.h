// /Script/Icarus.HeatmapAISpawnData
// size 0x30, declared in Icarus/Source/Icarus/AI/AISpawnConfigData.h

USTRUCT()
struct FHeatmapAISpawnData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UGameplayTexture> HeatmapTexture;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EHeatmapColorChannel HeatmapTextureChannel;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 HeatmapSpawnWeight;  // 0x002C, size 0x4
};
