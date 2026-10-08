// /Game/BP/Objects/World/Items/Deployables/UMG_RepairBench.UMG_RepairBench_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x3F0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RepairBench_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenMenu;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ButtonClose;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* DeviceInfoNote;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* DeviceInfoPower;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* DeviceInfoShelter;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* InventoryVertBox;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MainBorder;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* RepairAll;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* RepairArmor;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* RepairWorkshop;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* Slider_Threshold;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Threshold;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DeviceInventory_C* UMG_DeviceInventory;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerInventory_C* UMG_PlayerInventory;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Titlebar_C* UMG_Titlebar;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_ThresholdContainer;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowStoreAll;  // 0x0310, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowTakeAll;  // 0x0311, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Repair_Bench_C* RepairBench_Ref;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* PlayerCharacter_Ref;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerController* PlayerController_Ref;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerControllerSurvival_C* BPIcarusPlayerController_Ref;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UItemManipulationComponent* IPCManipulation_Ref;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UInventory*> Inventories;  // 0x0340, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRepairableItem> RepairList_;  // 0x0350, size 0x10, named "RepairList'"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQueueItem> PlayerMaterials;  // 0x0360, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRepairableItem> CanRepair;  // 0x0370, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQueueItem> StackedConsumedMaterials;  // 0x0380, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRepairableItem> CantRepair;  // 0x0390, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRepairableItem> CantRepairPower;  // 0x03A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRepairableItem> Test;  // 0x03B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQueueItem> TestResources;  // 0x03C0, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_ConfirmationPopup_C* Confirmation;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Repair_Bench_C* RepairBenchRef;  // 0x03D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQueueItem> MissingRepairMaterials;  // 0x03E0, size 0x10

    UFUNCTION(BlueprintCallable) void AbortRepair();
    UFUNCTION(BlueprintCallable) void AttemptRepair(bool bArmor, bool bWorkshopOnly, bool bExcludeWorkshop, const TArray<UInventory*>& Inventories);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_RepairBench_ButtonRepair_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_RepairBench_RepairArmor_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_RepairBench_RepairWorkshop_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_RepairBench_Slider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void CheckPoweredIndicator(bool& IsPowered);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckShelteredIndicator(bool& IsSheltered);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_RepairBench(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetRepairInventories(TArray<UInventory*>& Inventories);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ItemIsDamagedEnough(FItemData Item, bool& DamagedEnough);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable) void LinkedActorDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PerformRepair();
    UFUNCTION(BlueprintCallable) void RepairItemsInInventory(UInventory* Inventory, bool Armor);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetRepairThreshold(float InValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetupObjectInventory(UInventory* ContainerInventory);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ShowPoweredIndicator(bool HasPower);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShowShelteredIndicator(bool Sheltered);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateButtonVisibility(bool HasPower, bool HasShelter);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void UpdateItemVisibility();
};
