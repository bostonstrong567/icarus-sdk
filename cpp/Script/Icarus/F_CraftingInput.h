// /Script/Icarus.CraftingInput
// size 0x1C, declared in Icarus/Source/Icarus/DataStructs/CraftingData.h

USTRUCT()
struct FCraftingInput
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Element;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x0018, size 0x4
};
