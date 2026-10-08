// /Script/Chaos.SolverTrailingFilterSettings
// size 0x10, declared in Engine/Source/Runtime/Experimental/Chaos/Public/SolverEventFilters.h

USTRUCT()
struct FSolverTrailingFilterSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FilterEnabled;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinMass;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinSpeed;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinVolume;  // 0x000C, size 0x4
};
