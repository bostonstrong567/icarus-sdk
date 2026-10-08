// /Script/Icarus.TagQueries
// size 0x78, declared in Icarus/Source/Icarus/Systems/GameplayTags/TagQueries.h

USTRUCT()
struct FTagQueries : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagQuery Query;  // 0x0018, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0060, size 0x18
};
