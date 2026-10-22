// /Script/Icarus.SettlementNPC
// size 0x120, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementNPC
{
public:
    UPROPERTY(BlueprintReadOnly) FGuid NpcId;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0010, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 Gender;  // 0x0028, size 0x1
    UPROPERTY(BlueprintReadOnly) int32 DaysInSettlement;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCRolesRowHandle Role;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AssignedBuildingId;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGuid ActiveTaskId;  // 0x004C, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PlayerAssignedBuildingId;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGuid PlayerAssignedSlotTaskId;  // 0x0060, size 0x10
    UPROPERTY(Transient, BlueprintReadOnly) FSettlementNPCTaskTypesRowHandle BehaviourOverrideType;  // 0x0070, size 0x18
    UPROPERTY(Transient, BlueprintReadOnly) float BehaviourOverrideExpiry;  // 0x0088, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCSurvivalValues SurvivalValues;  // 0x008C, size 0x14
    UPROPERTY(Transient, BlueprintReadOnly) float WorkEfficiency;  // 0x00A0, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 LowMoodDays;  // 0x00A4, size 0x4
    UPROPERTY(BlueprintReadOnly) float SleepMinutesToday;  // 0x00A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESettlementNPCAilment Ailment;  // 0x00AC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AilmentSeverity;  // 0x00B0, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 IncapacitatedDays;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementNPCScheduleEntry> DailySchedule;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRowHandle CosmeticVariant;  // 0x00C8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Seed;  // 0x00E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCItemsRowHandle HeldItem;  // 0x00E4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementNPCTraitsRowHandle> Traits;  // 0x0100, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementNPCSkillProgress> Skills;  // 0x0110, size 0x10
};
