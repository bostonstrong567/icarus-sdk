// /Game/UI/Components/UMG_DisplayOnlyInventory.UMG_DisplayOnlyInventory_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DisplayOnlyInventory_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HighlightFlagOverlay;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* InventoryDisplay;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PreviewSlotCount;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SlotsX;  // 0x027C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_InventoryItem_C*> Slots;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_InventoryGrid_C* CurrentGrid;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle HighlightFlag;  // 0x0298, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemData> Items;  // 0x02B0, size 0x10

    UFUNCTION(BlueprintCallable) void AddInventorySlots();
    UFUNCTION(BlueprintCallable) void AddToGrid(UUMG_InventoryItem_C* WidgetSlot);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_DisplayOnlyInventory(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);  // parameters 0xF8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Re_Initialise();  // named "Re-Initialise"
    UFUNCTION(BlueprintCallable) void SetItems(const TArray<FItemData>& ItemsToShow);  // parameters 0x10
};
