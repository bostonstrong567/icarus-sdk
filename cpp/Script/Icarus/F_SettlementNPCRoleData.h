// /Script/Icarus.SettlementNPCRoleData
// size 0xC0, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementNPCRoleData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementNPCScheduleEntry> DefaultSchedule;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<ESettlementNPCActivity, FSettlementNPCTaskTypesRowHandle> ActivityDefaultTasks;  // 0x0040, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCClothingRowHandle ClothingOverride;  // 0x0090, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x00A8, size 0x18
};
