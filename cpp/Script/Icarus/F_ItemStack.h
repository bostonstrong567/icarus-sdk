// /Script/Icarus.ItemStack
// size 0x1C, declared in Icarus/Source/Icarus/Inventory/ItemStack.h

USTRUCT()
struct FItemStack
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Item;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x0018, size 0x4
};
