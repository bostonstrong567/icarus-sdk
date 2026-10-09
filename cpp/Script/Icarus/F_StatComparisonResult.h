// /Script/Icarus.StatComparisonResult
// size 0x24, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/StatsFunctionLibrary.generated.h

USTRUCT()
struct FStatComparisonResult
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsRowHandle Stat;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OldValue;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NewValue;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bValueAdded;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bValueRemoved;  // 0x0021, size 0x1
};
