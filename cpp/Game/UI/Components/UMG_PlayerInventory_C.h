// /Game/UI/Components/UMG_PlayerInventory.UMG_PlayerInventory_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PlayerInventory_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_C* Inventory;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* InventorySize;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* KeypromptsSizebox;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* RetainerBox_0;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* SplitStack;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* StoreAllButton;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* Transfer;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* TransferLikeButton;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EnvirosuitSlots_C* UMG_EnvirosuitSlots;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKey_C* UMG_PhysicalKey;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKey_C* UMG_PhysicalKey_1;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Sort_C* UMG_Sort;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShowStoreAll;  // 0x02D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHideSurvival;  // 0x02D1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InventoryHeightOverride;  // 0x02D4, size 0x4

    UFUNCTION() void BndEvt__StoreAllButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_PlayerInventory_StoreAllButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_PlayerInventory(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindLinkedInventory(UInventory*& Inventory);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Initialise(AActor* LinkedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void IsReadOnlyInventoryOrSingleSlot(bool& ReadOnly);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OverrideInventorySizeBox(float InMaxDesiredHeight);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
