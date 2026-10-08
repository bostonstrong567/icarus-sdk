// /Script/Icarus.GreatHunt
// size 0xB0, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/GreatHuntsLibrary.generated.h

USTRUCT()
struct FGreatHunt : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentArchetypesRowHandle Hunt;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectListRowHandle Prospect;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTalentsRowHandle> ForbiddenTalent;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGreatHuntMissionType Type;  // 0x0058, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FWorldStatsEnum, int32> WorldStats;  // 0x0060, size 0x50
};
