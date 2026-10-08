// /Script/Icarus.ItemTooltipBase
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x460, declared in Icarus/Source/Icarus/UI/Elements/ItemTooltipBase.h

UCLASS(EditInlineNew)
class UItemTooltipBase : public UUserWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ItemData;  // 0x0260, size 0x1F0
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x0450, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InventorySlot;  // 0x0458, size 0x4

    UFUNCTION(BlueprintImplementableEvent) void UpdateTooltip();
};
