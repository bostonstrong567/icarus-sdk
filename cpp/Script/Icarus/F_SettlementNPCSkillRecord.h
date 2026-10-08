// /Script/Icarus.SettlementNPCSkillRecord
// size 0x10, declared in Icarus/Source/Icarus/Settlement/SettlementRecorderComponent.h

USTRUCT()
struct FSettlementNPCSkillRecord
{
    UPROPERTY(SaveGame) FName SkillRow;  // 0x0000, size 0x8
    UPROPERTY(SaveGame) float Xp;  // 0x0008, size 0x4
    UPROPERTY(SaveGame) float PassionMultiplier;  // 0x000C, size 0x4
};
