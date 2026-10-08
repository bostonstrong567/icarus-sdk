// /Script/Icarus.SettlementTalentRecord
// size 0x18, declared in Icarus/Source/Icarus/Settlement/SettlementRecorderComponent.h

USTRUCT()
struct FSettlementTalentRecord
{
    UPROPERTY(SaveGame) FString RowName;  // 0x0000, size 0x10
    UPROPERTY(SaveGame) int32 Rank;  // 0x0010, size 0x4
};
