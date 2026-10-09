// /Script/Icarus.StatGameplayTag
// size 0x30, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/StatGameplayTagsLibrary.generated.h

USTRUCT()
struct FStatGameplayTag : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum Stat;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTag GameplayTag;  // 0x0028, size 0x8
};
