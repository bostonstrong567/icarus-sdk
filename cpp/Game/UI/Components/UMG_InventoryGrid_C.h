// /Game/UI/Components/UMG_InventoryGrid.UMG_InventoryGrid_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x270, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InventoryGrid_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* Grid;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InventoryWidth;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SlotCount;  // 0x026C, size 0x4

    UFUNCTION(BlueprintCallable) void AddInventorySlot(UUMG_InventoryItem_C* ItemSlot);  // parameters 0x8
};
