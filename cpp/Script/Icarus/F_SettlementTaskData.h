// /Script/Icarus.SettlementTaskData
// size 0xB0, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementTaskData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCTaskTypesRowHandle NPCTaskType;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bRequiresWorker;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCraftingInput> InputItems;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FResourceItem> InputResources;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQueryInput> InputQueries;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementGenerationOutput> Outputs;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum RateStat;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESettlementNPCActivity RequiredActivity;  // 0x00A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OutputUnitsPerInput;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESettlementGenerationOutputMode OutputMode;  // 0x00A8, size 0x1
};
