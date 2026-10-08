// /Game/UI/UMG_ClientLoggingEntry.UMG_ClientLoggingEntry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x284, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ClientLoggingEntry_C : public UUserWidget, public IUserObjectListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MessageText;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TimeText;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UBP_ClientLogItem_C* ClientLogItem;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 TextSize;  // 0x0280, size 0x4

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_ClientLoggingEntry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialize();
    UFUNCTION(BlueprintImplementableEvent) void OnListItemObjectSet(UObject* ListItemObject);  // parameters 0x8
};
