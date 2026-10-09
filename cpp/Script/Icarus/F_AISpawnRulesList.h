// /Script/Icarus.AISpawnRulesList
// size 0x10, declared in Icarus/Source/Icarus/AI/AISpawnConfigData.h

USTRUCT()
struct FAISpawnRulesList
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAISpawnRulesEnum> SpawnRules;  // 0x0000, size 0x10
};
