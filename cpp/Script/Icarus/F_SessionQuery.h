// /Script/Icarus.SessionQuery
// size 0x20, declared in Icarus/Source/Icarus/Subsystems/GameInstance/MatchmakingSubsystem.h

USTRUCT()
struct FSessionQuery
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESessionSortType SortType;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESessionSortDirection SortDirection;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFilters Filters;  // 0x0008, size 0x18
};
