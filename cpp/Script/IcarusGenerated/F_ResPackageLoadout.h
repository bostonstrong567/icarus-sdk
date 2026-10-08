// /Script/IcarusGenerated.ResPackageLoadout
// size 0x108, declared in Icarus/Source/IcarusGenerated/Public/Struct/ResPackageLoadout.h

USTRUCT()
struct FResPackageLoadout
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LoadoutIndex;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryDelta InventoryDelta;  // 0x0008, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDropshipDelta DropshipDelta;  // 0x0020, size 0xE0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Locked;  // 0x0100, size 0x1
};
