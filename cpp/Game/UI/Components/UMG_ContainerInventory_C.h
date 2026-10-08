// /Game/UI/Components/UMG_ContainerInventory.UMG_ContainerInventory_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D2, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ContainerInventory_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_C* Inventory;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* InventoryOverlay;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_Sort;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* TakeAllButtonInput;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DarkTitlebar_C* UMG_DarkTitlebar;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Sort_C* UMG_Sort;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryIDEnum Inventory_ID;  // 0x02A0, size 0x10, named "Inventory ID"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowTakeAll;  // 0x02B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FLootAll LootAll;  // 0x02B8, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* ContainerInventory;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TakeAllShouldSkipBags;  // 0x02D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowSort;  // 0x02D1, size 0x1

    UFUNCTION() void BndEvt__UMG_ContainerInventory_TakeAllButtonInput_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Destruct();
    UFUNCTION() void ExecuteUbergraph_UMG_ContainerInventory(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(FItemData ItemData);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void LootAllKeyPress();
    UFUNCTION(BlueprintCallable) void LootAll__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
