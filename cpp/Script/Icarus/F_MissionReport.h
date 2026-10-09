// /Script/Icarus.MissionReport
// size 0xC0, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/IcarusGameModeSurvival.generated.h

USTRUCT()
struct FMissionReport
{
public:
    UPROPERTY(BlueprintReadWrite) FProspectInfo ProspectInfo;  // 0x0000, size 0xA0
    UPROPERTY(BlueprintReadWrite) TArray<FMissionReportCurrency> Currency;  // 0x00A0, size 0x10
    UPROPERTY(BlueprintReadWrite) TArray<FFactionMissionsRowHandle> CompletedMissions;  // 0x00B0, size 0x10
};
