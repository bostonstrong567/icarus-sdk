// /Script/Icarus.UseCondition
// size 0x50, declared in Icarus/Source/Icarus/Traits/Behaviours/UsableData.h

USTRUCT()
struct FUseCondition
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FUsesRowHandle Use;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagContainer RequiredTags;  // 0x0018, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStatComparison> RequiredStats;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bMustOwnInventory;  // 0x0048, size 0x1
};
