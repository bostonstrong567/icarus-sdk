// /Script/Icarus.StaminaCost
// size 0x40, declared in Icarus/Source/Icarus/DataStructs/StaminaCost.h

USTRUCT()
struct FStaminaCost : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BeginActionCost;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EndActionCost;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PerSecondCost;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVirtualStatsEnum EffectingStat;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCanPerformActionWithInsufficientStamina;  // 0x0038, size 0x1
};
