// /Script/Icarus.EpicCreatures
// size 0x90, declared in Icarus/Source/Icarus/AI/Epic/EpicCreatures.h

USTRUCT()
struct FEpicCreatures : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> CreatureNames;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x0028, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBaseStatsEnum, int32> AdditionalStats;  // 0x0040, size 0x50
};
