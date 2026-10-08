// /Script/Icarus.RepairData
// size 0x1C, declared in Icarus/Source/Icarus/Traits/Behaviours/DurableData.h

USTRUCT()
struct FRepairData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Item;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Amount;  // 0x0018, size 0x4
};
