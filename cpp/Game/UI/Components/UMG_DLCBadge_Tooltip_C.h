// /Game/UI/Components/UMG_DLCBadge_Tooltip.UMG_DLCBadge_Tooltip_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DLCBadge_Tooltip_C : public UUserWidget
{
public:
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ExpandInfo;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ExpandProgressBar;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_SidePanel;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* OverallSize;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* RichTextBlock_96;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_Title;  // 0x0288, size 0x8

    UFUNCTION(BlueprintCallable) void UpdateForDLC(FDLCPackageDataRowHandle DLC);  // parameters 0x18
};
