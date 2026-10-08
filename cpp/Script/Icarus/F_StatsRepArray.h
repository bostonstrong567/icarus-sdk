// /Script/Icarus.StatsRepArray
// size 0x118, declared in Icarus/Source/Icarus/Stats/IcarusStatContainer.h

USTRUCT()
struct FStatsRepArray : public FFastArraySerializer
{
    UPROPERTY() TArray<FStatPairRepState> StatList;  // 0x0108, size 0x10
};
