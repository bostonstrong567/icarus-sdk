// /Script/Icarus.SettlementGenerationEntry
// size 0x48, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementGenerationEntry
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementGenerationOutput> Outputs;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum RateStat;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESettlementNPCActivity RequiredActivity;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OutputUnitsPerInput;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCraftingInput> InputItems;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FResourceItem> InputResources;  // 0x0038, size 0x10
};
