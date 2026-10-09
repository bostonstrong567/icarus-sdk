// /Game/UI/Components/F_CraftingInput.F_CraftingInput
// size 0x18

USTRUCT()
struct F_CraftingInput
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AIcarusItem> ItemClass;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* Inventory;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Location;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Amount;  // 0x0014, size 0x4
};
