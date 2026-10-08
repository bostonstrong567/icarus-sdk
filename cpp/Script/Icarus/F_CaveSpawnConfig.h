// /Script/Icarus.CaveSpawnConfig
// size 0x38, declared in Icarus/Source/Icarus/AI/IcarusCaveAISpawner.h

USTRUCT()
struct FCaveSpawnConfig
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinSpawnNumber;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxSpawnNumber;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTransform> SpawnPoints;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnedActors;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> DeathTimestamps;  // 0x0028, size 0x10
};
