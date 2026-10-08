// /Script/Icarus.SpawnBlocker
// size 0x18, declared in Icarus/Source/Icarus/AI/AISpawner.h

USTRUCT()
struct FSpawnBlocker
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector BlockerLocation;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExpirationTime;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Duration;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasPlayerLeftArea;  // 0x0014, size 0x1
};
