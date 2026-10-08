// /Script/Icarus.QuestEnemyModifier
// size 0x60, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/QuestEnemyModifiersLibrary.generated.h

USTRUCT()
struct FQuestEnemyModifier : public FQuestModifierData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAISetupRowHandle> PossibleEnemies;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxEnemies;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSpawnAllInitially;  // 0x0054, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bRespawnEnemies;  // 0x0055, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpawnInterval;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpawnDistance;  // 0x005C, size 0x4
};
