// /Script/Icarus.SettlementVisitorRecord
// size 0xD8, declared in Icarus/Source/Icarus/Settlement/SettlementRecorderComponent.h

USTRUCT()
struct FSettlementVisitorRecord
{
public:
    UPROPERTY(SaveGame) FSettlementNPCRecord NPC;  // 0x0000, size 0xD0
    UPROPERTY(SaveGame) int32 ArrivalDay;  // 0x00D0, size 0x4
};
