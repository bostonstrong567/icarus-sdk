// /Game/UI/Windows/UMG_Exotic_Delivery.UMG_Exotic_Delivery_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2E8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Exotic_Delivery_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AnglePiece;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_C* Backpack;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CloseButton;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DropshipInventoryPrompt;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_C* Loadout;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MissionEndPrompt;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* Return;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PersistentMountList_C* UMG_PersistentMountList;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryIDEnum Inventory_ID;  // 0x02C8, size 0x10, named "Inventory ID"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusMountCharacter*> MountsToRemove;  // 0x02D8, size 0x10

    UFUNCTION(BlueprintCallable) void AreSelectedMountsReadyToTransport(bool& Ready);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void BeginDelivery();
    UFUNCTION() void BndEvt__Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DoNothing();
    UFUNCTION(BlueprintCallable) void EmptyMountInventories();
    UFUNCTION() void ExecuteUbergraph_UMG_Exotic_Delivery(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSelectedMountActors(TArray<ABP_Mount_Base_C*>& SelectedMounts);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsHostWithClients(bool& Result);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnYes();
};
