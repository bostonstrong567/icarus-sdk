// /Game/UI/Components/Inventory/UMG_InventoryEnvirosuit.UMG_InventoryEnvirosuit_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x270, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InventoryEnvirosuit_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItemSlow_C* ItemSlot;  // 0x0268, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_InventoryEnvirosuit(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateLockState();
};
