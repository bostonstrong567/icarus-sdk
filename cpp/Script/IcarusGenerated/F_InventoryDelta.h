// /Script/IcarusGenerated.InventoryDelta
// size 0x18, declared in Icarus/Source/IcarusGenerated/Public/Struct/InventoryDelta.h

USTRUCT()
struct FInventoryDelta
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMetaInventoryID ID;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaItemDelta> Delta;  // 0x0008, size 0x10
};
