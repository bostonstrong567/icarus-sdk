// /Script/Icarus.ProspectStat
// size 0x68, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/ProspectStatsLibrary.generated.h

USTRUCT()
struct FProspectStat : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FWorldStatsEnum, int32> WorldStats;  // 0x0018, size 0x50
};
