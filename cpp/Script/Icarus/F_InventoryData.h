// /Script/Icarus.InventoryData
// size 0x28, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryComponent.generated.h

USTRUCT()
struct FInventoryData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FInventoryInfoRowHandle> Inventories;  // 0x0018, size 0x10
};
