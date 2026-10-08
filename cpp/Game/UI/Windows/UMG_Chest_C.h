// /Game/UI/Windows/UMG_Chest.UMG_Chest_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2CA, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Chest_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenMenu;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* InventoryVertBox;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MainBorder;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_2;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DeployableModifiersList_C* UMG_DeployableModifiersList;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DeviceInventory_C* UMG_DeviceInventory;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerInventory_C* UMG_PlayerInventory;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowStoreAll;  // 0x02C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowTakeAll;  // 0x02C9, size 0x1

    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Chest(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LinkedActorDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetupObjectInventory(UInventory* ContainerInventory);  // parameters 0x8
};
