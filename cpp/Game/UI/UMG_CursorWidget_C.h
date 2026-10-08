// /Game/UI/UMG_CursorWidget.UMG_CursorWidget_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CursorWidget_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* InventoryItemBox;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItemSlow_C* UMG_InventoryItemSlow;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* ItemWidget;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* CurrentInventory;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentLocation;  // 0x0288, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x028C, size 0x4

    UFUNCTION(BlueprintCallable) void Clear();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DragItem(UInventory* Inventory, int32 Location, UUMG_InventoryItem_C* Item, int32 Count);  // parameters 0x1C
    UFUNCTION() void ExecuteUbergraph_UMG_CursorWidget(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable) void OnWindowLostFocus();
    UFUNCTION(BlueprintCallable) void Update();
};
