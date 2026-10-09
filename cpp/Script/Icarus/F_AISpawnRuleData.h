// /Script/Icarus.AISpawnRuleData
// size 0x98, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/AISpawnRulesLibrary.generated.h

USTRUCT()
struct FAISpawnRuleData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UIcarusAISpawnFilter> SpawnFilter;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InverseCondition;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString, int32> FilterParams;  // 0x0048, size 0x50
};
