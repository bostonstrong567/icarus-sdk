// /Script/Icarus.InventoryItemWidgetBase
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x468, declared in Icarus/Source/Icarus/UI/Elements/InventoryItemWidgetBase.h

UCLASS(EditInlineNew)
class UInventoryItemWidgetBase : public UUserWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Item;  // 0x0260, size 0x1F0
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x0450, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentLocation;  // 0x0458, size 0x4
    UPROPERTY(Instanced) TWeakObjectPtr<UItemTooltipBase> CachedTooltipWidget;  // 0x045C, size 0x8

    UFUNCTION() UWidget* GetTooltip();  // parameters 0x8
    UFUNCTION(BlueprintCallable) UItemTooltipBase* TryGetCurrentTooltipWidget();  // parameters 0x8
};
