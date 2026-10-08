// /Script/IcarusGenerated.ResGetTrackedStats
// size 0x18, declared in Icarus/Source/IcarusGenerated/Public/Struct/ResGetTrackedStats.h

USTRUCT()
struct FResGetTrackedStats
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTrackedStat> TrackedStats;  // 0x0008, size 0x10
};
