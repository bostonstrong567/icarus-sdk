// /Script/Icarus.IcarusTerrain
// size 0x180, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/TerrainsLibrary.generated.h

USTRUCT()
struct FIcarusTerrain : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText TerrainName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UWorld> Level;  // 0x0030, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UGameplayTexture> TemperatureMap;  // 0x0058, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D TemperatureMapRange;  // 0x0080, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UGameplayTexture> BiomeMap;  // 0x0088, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UGameplayTexture> Bounds;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISpawnConfigRowHandle SpawnConfig;  // 0x00D8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFishSpawnConfigRowHandle FishConfig;  // 0x00F0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FWorldBossesRowHandle, FVector2D> WorldBosses;  // 0x0108, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UGameplayTexture> AudioZoneMap;  // 0x0158, size 0x28
};
