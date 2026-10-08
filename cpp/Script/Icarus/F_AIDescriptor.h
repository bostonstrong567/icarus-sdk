// /Script/Icarus.AIDescriptor
// size 0x48, declared in Icarus/Source/Icarus/IcarusGenerated/AIDescriptors/AIDescriptorsRowHandle.h

USTRUCT()
struct FAIDescriptor : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagContainer Tags;  // 0x0018, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStatsEnum> DescriptorStats;  // 0x0038, size 0x10
};
