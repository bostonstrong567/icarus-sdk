// /Script/Icarus.FocusedItemData
// size 0x10, declared in Icarus/Source/Icarus/Characters/IcarusPlayerCharacter.h

USTRUCT()
struct FFocusedItemData
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* FocusedItemInventory;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FocusedItemSlot;  // 0x0008, size 0x4
};
