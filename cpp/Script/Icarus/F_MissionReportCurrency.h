// /Script/Icarus.MissionReportCurrency
// size 0x18, declared in Icarus/Source/Icarus/DataStructs/MissionReport.h

USTRUCT()
struct FMissionReportCurrency
{
    UPROPERTY(BlueprintReadWrite) FMetaCurrencyEnum Currency;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadWrite) int32 Total;  // 0x0010, size 0x4
};
