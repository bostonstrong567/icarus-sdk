// /Game/UI/Components/UMG_InventoryItemLight.UMG_InventoryItemLight_C
// Derives from: UUMG_InventoryItem_C > UInventoryItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0xA78, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InventoryItemLight_C : public UUMG_InventoryItem_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0A68, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_InventoryItemLight_Details_C* LightSlotDetails;  // 0x0A70, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_InventoryItemLight(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LightSlotStyle(bool IsEquipped);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
