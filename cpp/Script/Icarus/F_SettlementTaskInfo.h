// /Script/Icarus.SettlementTaskInfo
// size 0x48, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementTaskInfo
{
public:
    UPROPERTY(BlueprintReadOnly) FSettlementTasksRowHandle Task;  // 0x0000, size 0x18
    UPROPERTY(BlueprintReadOnly) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(BlueprintReadOnly) TArray<FSettlementGenerationOutput> Outputs;  // 0x0030, size 0x10
    UPROPERTY(BlueprintReadOnly) bool bIsProduction;  // 0x0040, size 0x1
    UPROPERTY(BlueprintReadOnly) bool bRequiresWorker;  // 0x0041, size 0x1
    UPROPERTY(BlueprintReadOnly) bool bRequiresInputs;  // 0x0042, size 0x1
    UPROPERTY(BlueprintReadOnly) bool bInputsAvailable;  // 0x0043, size 0x1
    UPROPERTY(BlueprintReadOnly) int32 AssignedWorkers;  // 0x0044, size 0x4
};
