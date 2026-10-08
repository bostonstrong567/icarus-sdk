// /Game/UI/Components/UMG_InventoryItemSlow.UMG_InventoryItemSlow_C
// Derives from: UUMG_InventoryItem_C > UInventoryItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0xA71, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InventoryItemSlow_C : public UUMG_InventoryItem_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0A68, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NeedsUpdate;  // 0x0A70, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_InventoryItemSlow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(UInventory* BoundInventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnInventoryItemUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnInventoryUpdated(UInventory* Inventory);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
