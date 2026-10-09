// /Script/Icarus.DifficultySetup
// size 0x28, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/IcarusFunctionLibrary.generated.h

USTRUCT()
struct FDifficultySetup
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FProspectStatsRowHandle> DifficultyStats;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectForecastRowHandle Forecast;  // 0x0010, size 0x18
};
