// /Script/Icarus.SettlementNPCSurvivalRecord
// size 0x14, declared in Icarus/Source/Icarus/Settlement/SettlementRecorderComponent.h

USTRUCT()
struct FSettlementNPCSurvivalRecord
{
    UPROPERTY(SaveGame) int32 Hunger;  // 0x0000, size 0x4
    UPROPERTY(SaveGame) int32 Water;  // 0x0004, size 0x4
    UPROPERTY(SaveGame) int32 Oxygen;  // 0x0008, size 0x4
    UPROPERTY(SaveGame) int32 Rest;  // 0x000C, size 0x4
    UPROPERTY(SaveGame) int32 Mood;  // 0x0010, size 0x4
};
