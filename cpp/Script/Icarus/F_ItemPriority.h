// /Script/Icarus.ItemPriority
// size 0x28, declared in Icarus/Source/Icarus/Controllers/IcarusPlayerControllerSurvival.h

USTRUCT()
struct FItemPriority
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle QueryRow;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryIDEnum InventoryID;  // 0x0018, size 0x10
};
