// /Script/Icarus.AISpawnConfigData
// size 0xB0, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/AISpawner.generated.h

USTRUCT()
struct FAISpawnConfigData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FAISetupEnum, FAISpawnRulesList> AISpawnRules;  // 0x0018, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UGameplayTexture> SpawnMap;  // 0x0068, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAISpawnZoneSetup> SpawnZones;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAutonomousSpawnsRowHandle> TerrainAutonomousSpawners;  // 0x00A0, size 0x10
};
