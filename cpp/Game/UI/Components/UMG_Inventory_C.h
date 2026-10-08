// /Game/UI/Components/UMG_Inventory.UMG_Inventory_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2F1, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Inventory_C : public UUserWidget, public IInventorySlotChangeListener
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HighlightFlagOverlay;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* InventoryDisplay;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PreviewSlotCount;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SlotsX;  // 0x027C, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_InventoryItem_C*> Slots;  // 0x0288, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_InventoryGrid_C* CurrentGrid;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PreviousSlotable;  // 0x02A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle PreviousQuery;  // 0x02A4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle HighlightFlag;  // 0x02BC, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_QuestHelper_C* QuestHelper;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DisplayOnly;  // 0x02E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AllowContextMenuWhileLocked;  // 0x02E1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ManageChildSlotUpdates;  // 0x02E2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusHUD* RegisteredWithHUD;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DisableContextMenu;  // 0x02F0, size 0x1

    UFUNCTION(BlueprintCallable) void AddInventorySlots();
    UFUNCTION(BlueprintCallable) void AddToGrid(UUMG_InventoryItem_C* WidgetSlot, FInventorySlot SlotInfo);  // parameters 0x248
    UFUNCTION(BlueprintCallable) void BindToInventorySlotChange();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Destruct();
    UFUNCTION() void ExecuteUbergraph_UMG_Inventory(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void HandleChangedSlots(UInventory* Inventory, const TSet<int32>& ChangedSlotIndices);  // parameters 0x58
    UFUNCTION(BlueprintCallable) void Initialise(UInventory* NewInventory);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);  // parameters 0xF8
    UFUNCTION(BlueprintCallable) void OnInventoryMove(int32 Location, UInventory* Inventory);  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Re_Initialise();  // named "Re-Initialise"
    UFUNCTION(BlueprintCallable) void Reinit(UInventory* Inventory);  // parameters 0x8
};
