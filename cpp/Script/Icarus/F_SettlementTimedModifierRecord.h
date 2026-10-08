// /Script/Icarus.SettlementTimedModifierRecord
// size 0xC, declared in Icarus/Source/Icarus/Settlement/SettlementRecorderComponent.h

USTRUCT()
struct FSettlementTimedModifierRecord
{
    UPROPERTY(SaveGame) FName ModifierRow;  // 0x0000, size 0x8
    UPROPERTY(SaveGame) int32 RemovalDay;  // 0x0008, size 0x4
};
