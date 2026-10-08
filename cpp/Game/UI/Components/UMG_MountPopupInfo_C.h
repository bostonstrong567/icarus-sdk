// /Game/UI/Components/UMG_MountPopupInfo.UMG_MountPopupInfo_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x281, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MountPopupInfo_C : public UUserWidget, public IUserListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Level;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_MountName;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AddedItem;  // 0x0280, size 0x1

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_MountPopupInfo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Update(FItemData& Item);  // parameters 0x1F0
};
