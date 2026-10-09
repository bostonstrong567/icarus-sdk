// /Script/Icarus.EquippableData
// size 0x118, declared in Icarus/Source/Icarus/Traits/Behaviours/EquippableData.h

USTRUCT()
struct FEquippableData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UEquippableModifier> EquippableModifier;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> GrantedStats;  // 0x0040, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bStackedModifiersGiveDiminishingReturns;  // 0x0090, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AActor> GlobalStat_ActorClass;  // 0x0098, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> GlobalStat_GrantedStats;  // 0x00C0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAppliesInAllInventories;  // 0x0110, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bBindToAllInventoryUpdates;  // 0x0111, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bPreventReinitialisation;  // 0x0112, size 0x1
};
