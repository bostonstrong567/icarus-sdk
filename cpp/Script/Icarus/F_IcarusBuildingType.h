// /Script/Icarus.IcarusBuildingType
// size 0x80, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/BuildingTypesLibrary.generated.h

USTRUCT()
struct FIcarusBuildingType : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle TagQuery;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> Stats;  // 0x0030, size 0x50
};
