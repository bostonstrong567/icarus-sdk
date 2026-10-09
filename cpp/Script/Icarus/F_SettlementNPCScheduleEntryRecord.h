// /Script/Icarus.SettlementNPCScheduleEntryRecord
// size 0xC, declared in Icarus/Source/Icarus/Settlement/SettlementRecorderComponent.h

USTRUCT()
struct FSettlementNPCScheduleEntryRecord
{
public:
    UPROPERTY(SaveGame) ESettlementNPCActivity Activity;  // 0x0000, size 0x1
    UPROPERTY(SaveGame) int32 StartHour;  // 0x0004, size 0x4
    UPROPERTY(SaveGame) int32 EndHour;  // 0x0008, size 0x4
};
