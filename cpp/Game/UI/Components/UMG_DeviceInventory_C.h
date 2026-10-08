// /Game/UI/Components/UMG_DeviceInventory.UMG_DeviceInventory_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DeviceInventory_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_C* Inventory;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* InventoryOverlay;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_Sort;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* TakeAllButtonInput;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Capacity;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DarkTitlebar_C* UMG_DarkTitlebar;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FillableProgressBar_C* UMG_FillableProgressBar;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Sort_C* UMG_Sort;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryIDEnum Inventory_ID;  // 0x02B0, size 0x10, named "Inventory ID"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowTakeAll;  // 0x02C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FLootAll LootAll;  // 0x02C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle UpdateFillableTimer;  // 0x02D8, size 0x8

    UFUNCTION() void BndEvt__TakeAllButtonInput_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Destruct();
    UFUNCTION() void ExecuteUbergraph_UMG_DeviceInventory(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetDisplayInventory(UInventory*& Inventory);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Initialise(AActor* LinkedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void LootAllKeyPress();
    UFUNCTION(BlueprintCallable) void LootAll__DelegateSignature();
    UFUNCTION(BlueprintCallable) void UpdateFillable();
};
