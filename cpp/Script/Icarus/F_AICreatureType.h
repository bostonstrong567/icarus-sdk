// /Script/Icarus.AICreatureType
// size 0x88, declared in Icarus/Source/Icarus/IcarusGenerated/AICreatureType/AICreatureTypeRowHandle.h

USTRUCT()
struct FAICreatureType : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText CreatureName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTag Tag;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVirtualStatsEnum SpawnStat;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVirtualStatsEnum AdditionalDamageStat;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVirtualStatsEnum AdditionalResistanceStat;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExperienceEventsRowHandle SkinningXPEvent;  // 0x0068, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTag ParentCreatureTag;  // 0x0080, size 0x8
};
