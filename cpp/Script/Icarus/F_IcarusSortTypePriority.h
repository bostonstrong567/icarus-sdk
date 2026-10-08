// /Script/Icarus.IcarusSortTypePriority
// size 0x28, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/SortTypePriorityLibrary.generated.h

USTRUCT()
struct FIcarusSortTypePriority : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTagQueriesRowHandle> TagPriority;  // 0x0018, size 0x10
};
