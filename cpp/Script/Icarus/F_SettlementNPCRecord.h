// /Script/Icarus.SettlementNPCRecord
// size 0xC0, declared in Icarus/Source/Icarus/Settlement/SettlementRecorderComponent.h

USTRUCT()
struct FSettlementNPCRecord
{
public:
    UPROPERTY(SaveGame) FGuid NpcId;  // 0x0000, size 0x10
    UPROPERTY(SaveGame) FString DisplayName;  // 0x0010, size 0x10
    UPROPERTY(SaveGame) uint8 Gender;  // 0x0020, size 0x1
    UPROPERTY(SaveGame) FName RoleRow;  // 0x0024, size 0x8
    UPROPERTY(SaveGame) FName HeldItemRow;  // 0x002C, size 0x8
    UPROPERTY(SaveGame) int32 AssignedBuildingId;  // 0x0034, size 0x4
    UPROPERTY(SaveGame) int32 PlayerAssignedBuildingId;  // 0x0038, size 0x4
    UPROPERTY(SaveGame) int32 DaysInSettlement;  // 0x003C, size 0x4
    UPROPERTY(SaveGame) FGuid ActiveTaskId;  // 0x0040, size 0x10
    UPROPERTY(SaveGame) FSettlementNPCSurvivalRecord SurvivalValues;  // 0x0050, size 0x14
    UPROPERTY(SaveGame) int32 LowMoodDays;  // 0x0064, size 0x4
    UPROPERTY(SaveGame) float SleepMinutesToday;  // 0x0068, size 0x4
    UPROPERTY(SaveGame) ESettlementNPCAilment Ailment;  // 0x006C, size 0x1
    UPROPERTY(SaveGame) int32 AilmentSeverity;  // 0x0070, size 0x4
    UPROPERTY(SaveGame) int32 IncapacitatedDays;  // 0x0074, size 0x4
    UPROPERTY(SaveGame) TArray<FSettlementNPCScheduleEntryRecord> DailySchedule;  // 0x0078, size 0x10
    UPROPERTY(SaveGame) FName CosmeticVariantTable;  // 0x0088, size 0x8
    UPROPERTY(SaveGame) FName CosmeticVariantRow;  // 0x0090, size 0x8
    UPROPERTY(SaveGame) int32 Seed;  // 0x0098, size 0x4
    UPROPERTY(SaveGame) TArray<FName> TraitRows;  // 0x00A0, size 0x10
    UPROPERTY(SaveGame) TArray<FSettlementNPCSkillRecord> Skills;  // 0x00B0, size 0x10
};
