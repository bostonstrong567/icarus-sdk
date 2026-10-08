// /Script/Icarus.SettlementNPCScheduleEntry
// size 0xC, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementNPCScheduleEntry
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESettlementNPCActivity Activity;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartHour;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EndHour;  // 0x0008, size 0x4
};
