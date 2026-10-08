// /Script/Icarus.CaveSpawnLoadedData
// size 0x20, declared in Icarus/Source/Icarus/AI/IcarusCaveAISpawner.h

USTRUCT()
struct FCaveSpawnLoadedData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CaveActorClassName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> TimeStamps;  // 0x0010, size 0x10
};
