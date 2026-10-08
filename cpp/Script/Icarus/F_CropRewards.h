// /Script/Icarus.CropRewards
// size 0x1C, declared in Icarus/Source/Icarus/DataStructs/FarmingSeedData.h

USTRUCT()
struct FCropRewards
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Amount;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle ItemType;  // 0x0004, size 0x18
};
