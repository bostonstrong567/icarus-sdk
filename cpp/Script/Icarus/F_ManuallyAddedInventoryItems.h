// /Script/Icarus.ManuallyAddedInventoryItems
// size 0x10, declared in Icarus/Source/Icarus/Traits/InventoryComponent.h

USTRUCT()
struct FManuallyAddedInventoryItems
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemRewardEntry> ItemRewards;  // 0x0000, size 0x10
};
