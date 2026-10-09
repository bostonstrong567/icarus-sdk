// /Script/Icarus.RulesetData
// size 0x28, declared in Icarus/Source/Icarus/DataStructs/RulesetData.h

USTRUCT()
struct FRulesetData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<URuleset> RulesetClass;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEnabledByDefault;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSpawnOnClient;  // 0x0021, size 0x1
};
