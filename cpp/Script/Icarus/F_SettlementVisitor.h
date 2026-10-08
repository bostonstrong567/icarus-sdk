// /Script/Icarus.SettlementVisitor
// size 0x118, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementVisitor
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPC NPC;  // 0x0000, size 0x110
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ArrivalDay;  // 0x0110, size 0x4
};
