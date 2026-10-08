// /Game/UI/ResourceNetworkInspector/UMG_ResourceNetworkInspector_StorageDeviceListEntry.UMG_ResourceNetworkInspector_StorageDeviceListEntry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ResourceNetworkInspector_StorageDeviceListEntry_C : public UUserWidget, public IUserObjectListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DeviceNameText;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* EntryBorder;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RateText;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* StoredBar;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StoredText;  // 0x0288, size 0x8

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_ResourceNetworkInspector_StorageDeviceListEntry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnListItemObjectSet(UObject* ListItemObject);  // parameters 0x8
};
