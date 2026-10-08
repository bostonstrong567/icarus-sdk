// /Script/Icarus.GOAPMotivation
// size 0x70, declared in Icarus/Source/Icarus/AI/GOAPStructs.h

USTRUCT()
struct FGOAPMotivation : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Description;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UpdateTick;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinValue;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxValue;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartingValue;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartingValueDeviation;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGOAPMotivationTrigger> MotivationTriggers;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UIcarusGOAPMotivation> MotivationBP;  // 0x0048, size 0x28
};
