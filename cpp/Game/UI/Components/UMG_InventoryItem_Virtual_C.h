// /Game/UI/Components/UMG_InventoryItem_Virtual.UMG_InventoryItem_Virtual_C
// Derives from: UUMG_InventoryItem_C > UInventoryItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0xA7C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InventoryItem_Virtual_C : public UUMG_InventoryItem_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0A68, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* VirtualTargetInventory;  // 0x0A70, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 VirtualInventorySlot;  // 0x0A78, size 0x4

    UFUNCTION(BlueprintCallable) void ClearItemData();
    UFUNCTION() void ExecuteUbergraph_UMG_InventoryItem_Virtual(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitialiseWithItemData(FItemData ItemData, UInventory* VirtualTargetInventory, int32 VirtualInventorySlot);  // parameters 0x1FC
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Trigger_Hover();  // named "Trigger Hover"
    UFUNCTION(BlueprintCallable) void Update(FItemData Item_Reference, FItemsStaticRowHandle Last_Item);  // parameters 0x208
};
