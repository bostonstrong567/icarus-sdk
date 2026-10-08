// /Game/UI/ResourceNetworkInspector/UMG_ResourceNetworkInspector_DeviceListEntry.UMG_ResourceNetworkInspector_DeviceListEntry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x311, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ResourceNetworkInspector_DeviceListEntry_C : public UUserWidget, public IUserObjectListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DeviceName;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* EntryBorder;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* IdleCount;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UListView* InstancesListView;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingIcon_C* LoadingSpinner;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* OffCount;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* OnCount;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PriorityIcon;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* RowExpandButton;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TotalValue;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Expanded;  // 0x02B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, UBP_ResourceNetworkInspectorIndividualDeviceListItemData_C*> InstancesMap;  // 0x02C0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RowHovered;  // 0x0310, size 0x1

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION() void BndEvt__UMG_ResourceNetworkInspector_DeviceListEntry_RowExpandButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_ResourceNetworkInspector_DeviceListEntry_RowExpandButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_ResourceNetworkInspector_DeviceListEntry_RowExpandButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CanExpand(bool& CanExpand);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_ResourceNetworkInspector_DeviceListEntry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDataUpdated();
    UFUNCTION(BlueprintImplementableEvent) void OnListItemObjectSet(UObject* ListItemObject);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ProcessDeviceInstanceData(FIcarusResourcesEnum ResourceType, TArray<FNetworkDeviceInstanceData>& Data, bool bShowPriorityBox, TArray<UBP_ResourceNetworkInspectorIndividualDeviceListItemData_C*>& SortedObjectList);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void StartInstanceRequests();
    UFUNCTION(BlueprintCallable) void StopInstanceRequests();
    UFUNCTION(BlueprintCallable) void ToggleExpanded();
    UFUNCTION(BlueprintCallable) void UpdateInstanceDataSpinnerVisibility();
    UFUNCTION(BlueprintCallable) void UpdateRowColour();
};
