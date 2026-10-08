// /Game/UI/ResourceNetworkInspector/UMG_ResourceNetworkInspector_DeviceListChildEntry.UMG_ResourceNetworkInspector_DeviceListChildEntry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ResourceNetworkInspector_DeviceListChildEntry_C : public UUserWidget, public IUserObjectListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DeviceDistance;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DeviceName;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* EntryBorder;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Checkbox_C* PriorityCheckbox;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StateText;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TotalValue;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* UMG_ButtonIcon;  // 0x0298, size 0x8

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION() void BndEvt__UMG_ResourceNetworkInspector_DeviceListChildEntry_PriorityCheckbox_K2Node_ComponentBoundEvent_0_Updated__DelegateSignature(bool Checked, bool WasForced);  // parameters 0x2
    UFUNCTION() void BndEvt__UMG_ResourceNetworkInspector_DeviceListChildEntry_UMG_ButtonIcon_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_ResourceNetworkInspector_DeviceListChildEntry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void IsPriorityChangeAllowed(AIcarusActor* DeviceActor, bool& Allowed);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnDataUpdated();
    UFUNCTION(BlueprintImplementableEvent) void OnListItemObjectSet(UObject* ListItemObject);  // parameters 0x8
};
