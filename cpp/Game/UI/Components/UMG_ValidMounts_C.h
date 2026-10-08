// /Game/UI/Components/UMG_ValidMounts.UMG_ValidMounts_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x28A, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ValidMounts_C : public UUserWidget, public IUserListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* AttachmentInfo;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_2;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MountText;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* UniformGridPanel;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSetBonus;  // 0x0288, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSetBonusActive;  // 0x0289, size 0x1

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_ValidMounts(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetRowColNums(int32 IconCount, int32& Row, int32& Col);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Update_Valid_Mounts(FItemData& Item);  // parameters 0x1F0, named "Update Valid Mounts"
};
