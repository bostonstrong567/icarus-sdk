// /Script/Icarus.ItemWeightStatQueries
// size 0x40, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/ItemWeightStatQueriesLibrary.generated.h

USTRUCT()
struct FItemWeightStatQueries : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum WeightStatToApply;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle ItemTagQuery;  // 0x0028, size 0x18
};
