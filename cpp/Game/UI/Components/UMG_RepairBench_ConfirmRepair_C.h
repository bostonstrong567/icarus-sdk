// /Game/UI/Components/UMG_RepairBench_ConfirmRepair.UMG_RepairBench_ConfirmRepair_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x338, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RepairBench_ConfirmRepair_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGridPanel* GridPanel_MissingResources;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGridPanel* GridPanel_RequiredResources;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* InventoryOverlay_ConsumedResources;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* InventoryOverlay_MissingResources;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* InventoryOverlay_NoRepair;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* InventoryOverlay_ToRepair;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DarkTitlebar_C* UMG_DarkTitlebar_Consumed;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DarkTitlebar_C* UMG_DarkTitlebar_Missing;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DarkTitlebar_C* UMG_DarkTitlebar_NoRepair;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DarkTitlebar_C* UMG_DarkTitlebar_ToRepair;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_RepairableItemList_C* UMG_Inventory_NonRepairableItemList;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_RepairableItemList_C* UMG_Inventory_RepairableItemList;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryIDEnum Inventory_ID;  // 0x02D0, size 0x10, named "Inventory ID"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRepairableItem> ItemsToRepair;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRepairableItem> ItemsNotRepairable;  // 0x02F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQueueItem> RequiredResources;  // 0x0300, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQueueItem> MissingResources;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 X;  // 0x0320, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRepairableItem> MissingPower;  // 0x0328, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_RepairBench_ConfirmRepair(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(AActor* LinkedActor, const TArray<FRepairableItem>& ItemsToRepair, const TArray<FRepairableItem>& ItemsNotRepairable, const TArray<FQueueItem>& RequiredResources, const TArray<FQueueItem>& MissingResources, const TArray<FRepairableItem>& MissingPower);  // parameters 0x58
};
