// /Script/Icarus.Horde
// size 0x78, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/HordeLibrary.generated.h

USTRUCT()
struct FHorde : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FHordeWaveRowHandle> Waves;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExperienceEventsRowHandle ExperienceEvent;  // 0x0028, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CompletionsBeforeInert;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemRewardsRowHandle> ItemReward;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemRewardsRowHandle> InertItemReward;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQuestQueriesRowHandle> LocationQueries;  // 0x0068, size 0x10
};
