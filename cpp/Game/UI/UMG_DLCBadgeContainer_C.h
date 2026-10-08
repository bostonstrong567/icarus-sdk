// /Game/UI/UMG_DLCBadgeContainer.UMG_DLCBadgeContainer_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DLCBadgeContainer_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* RevealTooltip;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DLCBadge_C* DANGEROUSHORIZONS;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DLCBadge_C* GREATHUNTS;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DLCBadge_C* HOMESTEAD;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_DLCs;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_128;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DLCBadge_C* NEWFRONTIERS;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DLCBadge_C* PETCOMPANIONS;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DLCBadge_C* STYX;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DLCBadge_Tooltip_C* UMG_DLCBadge_Tooltip_360;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_DLCBadge_C* HoveredWidget;  // 0x02B8, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_DLCBadgeContainer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDLCButtonHoverUpdated(bool IsHovered, UUMG_DLCBadge_C* Widget);  // parameters 0x10
};
