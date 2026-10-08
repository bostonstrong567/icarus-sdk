// /Script/Icarus.SettlementNPC
// size 0x110, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementNPC
{
    UPROPERTY(BlueprintReadOnly) FGuid NpcId;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0010, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 Gender;  // 0x0028, size 0x1
    UPROPERTY(BlueprintReadOnly) int32 DaysInSettlement;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCRolesRowHandle Role;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AssignedBuildingId;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGuid ActiveTaskId;  // 0x004C, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PlayerAssignedBuildingId;  // 0x005C, size 0x4
    UPROPERTY(Transient, BlueprintReadOnly) FSettlementNPCTaskTypesRowHandle BehaviourOverrideType;  // 0x0060, size 0x18
    UPROPERTY(Transient, BlueprintReadOnly) float BehaviourOverrideExpiry;  // 0x0078, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCSurvivalValues SurvivalValues;  // 0x007C, size 0x14
    UPROPERTY(Transient, BlueprintReadOnly) float WorkEfficiency;  // 0x0090, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 LowMoodDays;  // 0x0094, size 0x4
    UPROPERTY(BlueprintReadOnly) float SleepMinutesToday;  // 0x0098, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESettlementNPCAilment Ailment;  // 0x009C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AilmentSeverity;  // 0x00A0, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 IncapacitatedDays;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementNPCScheduleEntry> DailySchedule;  // 0x00A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRowHandle CosmeticVariant;  // 0x00B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Seed;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCItemsRowHandle HeldItem;  // 0x00D4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementNPCTraitsRowHandle> Traits;  // 0x00F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementNPCSkillProgress> Skills;  // 0x0100, size 0x10
};
