// /Game/BP/Settlement/UMG/UMG_Settlement_Building_Slot.UMG_Settlement_Building_Slot_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x368, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Settlement_Building_Slot_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Content;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Layout;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NoNPCText;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCustomComboBox* NPCList;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCustomComboBox* TaskList;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ASettlementBuilding* Building;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementSlotInfo SlotData;  // 0x0298, size 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementTasksRowHandle Task;  // 0x0318, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CurrentTask;  // 0x0330, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGuid Npc_Id;  // 0x0340, size 0x10, named "Npc Id"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ASettlement* Settlement;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString NPCName;  // 0x0358, size 0x10

    UFUNCTION() void BndEvt__UMG_Settlement_Building_Slot_NPCList_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(FString NameString, UUserWidget* Widget);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_Settlement_Building_Slot_TaskList_K2Node_ComponentBoundEvent_0_OnItemSet__DelegateSignature(FString NameString, UUserWidget* Widget);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Settlement_Building_Slot(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void NPCSelected(UObject* Object);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetupNPCList(const FGuid& NPCId);  // parameters 0x10
};
