// /Game/UI/Windows/BioLab/UMG_BioLab_InventoryListItem.UMG_BioLab_InventoryListItem_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x4E1, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BioLab_InventoryListItem_C : public UUserWidget, public IUserObjectListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* HoverAnimation;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Button_Background;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Button_border;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Gradient;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Gradient_HoverAnimate;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_66;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* PatternScalebox;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SelectionIndicatorAnimate;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotMain_C* UpgradeSlot1;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotMain_C* UpgradeSlot2;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotMain_C* UpgradeSlot3;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotMain_C* UpgradeSlot4;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotMain_C* UpgradeSlot5;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WeaponIcon;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WeaponName;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_BioLab_UpgradeSlotMain_C*> UpgradeSlots;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ItemData;  // 0x02F0, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Selected;  // 0x04E0, size 0x1, named "Is Selected"

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_BioLab_InventoryListItem(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnListItemObjectSet(UObject* ListItemObject);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
    UFUNCTION(BlueprintCallable) void RefreshAnimation();
};
