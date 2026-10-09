// /Script/IcarusGenerated.ResModifyDropship
// size 0x100, declared in Icarus/Source/IcarusGenerated/Public/Struct/ResModifyDropship.h

USTRUCT()
struct FResModifyDropship
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDropshipDelta DropshipDelta;  // 0x0008, size 0xE0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryDelta InventoryDelta;  // 0x00E8, size 0x18
};
