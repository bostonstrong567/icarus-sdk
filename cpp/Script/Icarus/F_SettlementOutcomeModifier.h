// /Script/Icarus.SettlementOutcomeModifier
// size 0x1C, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementOutcomeModifier
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle Modifier;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DurationDays;  // 0x0018, size 0x4
};
