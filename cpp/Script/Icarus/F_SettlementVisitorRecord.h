// /Script/Icarus.SettlementVisitorRecord
// size 0xC8, declared in Icarus/Source/Icarus/Settlement/SettlementRecorderComponent.h

USTRUCT()
struct FSettlementVisitorRecord
{
public:
    UPROPERTY(SaveGame) FSettlementNPCRecord NPC;  // 0x0000, size 0xC0
    UPROPERTY(SaveGame) int32 ArrivalDay;  // 0x00C0, size 0x4
};
