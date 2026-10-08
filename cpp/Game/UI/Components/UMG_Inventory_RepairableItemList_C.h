// /Game/UI/Components/UMG_Inventory_RepairableItemList.UMG_Inventory_RepairableItemList_C
// Derives from: UUMG_Inventory_C > UUserWidget > UWidget > UVisual > UObject
// size 0x310, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Inventory_RepairableItemList_C : public UUMG_Inventory_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* Grid;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRepairableItem> RepairableItemArray;  // 0x0300, size 0x10

    UFUNCTION(BlueprintCallable) void InitialiseWithItemList(TArray<FRepairableItem>& RepairableItemArray);  // parameters 0x10
};
