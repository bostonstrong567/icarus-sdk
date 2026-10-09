// /Script/IcarusGenerated.ResGetMetaInventory
// size 0x20, declared in Icarus/Source/IcarusGenerated/Public/Struct/ResGetMetaInventory.h

USTRUCT()
struct FResGetMetaInventory
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryDelta InventoryDelta;  // 0x0008, size 0x18
};
