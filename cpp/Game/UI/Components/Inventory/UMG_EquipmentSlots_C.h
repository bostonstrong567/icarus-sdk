// /Game/UI/Components/Inventory/UMG_EquipmentSlots.UMG_EquipmentSlots_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_EquipmentSlots_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItemSlow_C* Equipment;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* EquipmentSlot;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText SlotText;  // 0x0278, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_EquipmentSlots(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialize(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateInventoryItem();
};
