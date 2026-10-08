// /Game/BP/Settlement/UMG/UMG_SettlementLedger_ListEntry.UMG_SettlementLedger_ListEntry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettlementLedger_ListEntry_C : public UUserWidget, public IUserObjectListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UComboBoxText* AssignedNPC;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_75;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_BuildingIcon;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_BuildingName;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Status;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ASettlementBuilding* LinkedBuilding;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAutomaticAssignment;  // 0x02A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAssigned;  // 0x02A1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ASettlement* LinkedSettlement;  // 0x02A8, size 0x8

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION() void BndEvt__UMG_SettlementLedger_ListEntry_AssignedNPC_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FText SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);  // parameters 0x19
    UFUNCTION() void ExecuteUbergraph_UMG_SettlementLedger_ListEntry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnListItemObjectSet(UObject* ListItemObject);  // parameters 0x8
};
